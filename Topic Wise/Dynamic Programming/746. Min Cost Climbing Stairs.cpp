// Approach : 1
class Solution {
public:
    int dp[1007];
    int dp_func(vector<int>& cost, int i){
        if(i < 0 ) return 0;
        if(i == 0) return cost[i];
        if(i == 1) return cost[i];
        if(dp[i] != -1) return dp[i];
        
        int cnt = INT_MAX;
        cnt = min(cnt, cost[i] + dp_func(cost, i-1));
        cnt = min(cnt, cost[i] + dp_func(cost, i-2));

        return dp[i] = cnt;
    }


    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        memset(dp, -1, sizeof(dp));
        dp[0] = cost[0];
        dp[1] = cost[1];
        dp_func(cost, n-1);
        return min(dp[n-1], dp[n-2]);

        // int cost_last = dp_func(cost, n - 1);
        // int cost_second_last = dp_func(cost, n - 2);
        // return min(cost_last, cost_second_last);
    }
};

// Approach : 2
class Solution {
public:
    int dp[1007];
    int dp_func(vector<int>& cost, int i){
        if(i < 0 ) return 0;
        if(i == 0) return cost[i];
        if(i == 1) return cost[i];
        if(dp[i] != -1) return dp[i];
        
        int cnt = INT_MAX;
        cnt = min(cnt, cost[i] + dp_func(cost, i-1));
        cnt = min(cnt, cost[i] + dp_func(cost, i-2));

        return dp[i] = cnt;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        memset(dp, -1, sizeof(dp));
         int cost_last = dp_func(cost, n - 1);
        int cost_second_last = dp_func(cost, n - 2);
        return min(cost_last, cost_second_last);


        //dp[0] = cost[0];
        //dp[1] = cost[1];
        //dp_func(cost, n-1);
        //return min(dp[n-1], dp[n-2]);
    }
};