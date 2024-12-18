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
        if(n == 1) return nums[0];

        vector<int>first, second;
        for(int i=0; i<n; i++){
            if(i != n - 1) first.push_back(nums[i]);
            if(i != 0) second.push_back(nums[i]); 
        }

        int x = first.size();
        int y = second.size();

        vector<int> dp1(x, -1), dp2(y, -1);
        long long int robFirst = helper(first, x - 1, dp1);
        long long int robSecond = helper(second, y - 1, dp2);
        return max(robFirst, robSecond);
    }
};