// Approach : top-down
// Time Complexcity : O(n)
// Space Complexcity : O(n) + O(n);
class Solution {
public:
    int helper(vector<int>& cost, int n, vector<int>& dp){
        if(n == 0) return cost[0];
        if(n == 1) return cost[1];
        if(dp[n] != -1) return dp[n];

        dp[n] = cost[n] + min(helper(cost, n-1, dp), helper(cost, n-2, dp));
        return dp[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n+1, -1);
        dp[n] = min(helper(cost, n-1, dp), helper(cost, n-2, dp));
        return dp[n];
    }
};


// Approach : bottom up
// Time Complexcity : O(n)
// Space Complexcity : O(n)
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n+1, -1);
        dp[0] = cost[0];
        dp[1] = cost[1];

        for(int i=2; i<n; i++){
            dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
        }

        return min(dp[n-1], dp[n-2]);
    }
};



// Approach : Space Optimized
// Time Complexcity : O(n)
// Space Complexcity : O(1)
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int prev2 = cost[0];
        int prev1 = cost[1];

        for(int i=2; i<n; i++){
            int curr = cost[i] + min(prev1, prev2);
            prev2 = prev1;
            prev1 = curr;
        }

        return min(prev1, prev2);
    }
};


