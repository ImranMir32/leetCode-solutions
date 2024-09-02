// Approach : top down 
class Solution {
public:
    int helper(vector<int>& nums, int n, vector<int>& dp){
        if(n < 0) return 0;
        if(n == 0) return nums[0];
        if(dp[n] != -1) return dp[n];

        int incl = helper(nums, n-2, dp) + nums[n];
        int excl = helper(nums, n-1, dp) + 0;
        return dp[n] = max(incl, excl);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1, -1);
        return helper(nums, n-1, dp);
    }
};

// Approach : buttom up
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1, 0);
        dp[0] = nums[0];
        if(n != 1) dp[1] = max(nums[0], nums[1]);

        for(int i=2; i<n; i++){
            int incl = 0, excl = 0;
            incl = dp[i - 2] + nums[i];
            excl = dp[i - 1];
            dp[i] = max(incl, excl);
        }

        return dp[n - 1];
    }
};


// Approach : Space Optimized
// Time Complexcity : O(n)
// Space Complexcity : O(1)
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int prev2 = 0;
        int prev1 = nums[0];

        for(int i=1; i<n; i++){
            int incl = prev2 + nums[i];
            int excl = prev1;
            int ans = max(incl, excl);

            prev2 = prev1;
            prev1 = ans;
        }

        return prev1;
    }
};