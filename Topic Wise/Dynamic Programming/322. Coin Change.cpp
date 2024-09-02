// Approach : Top Down
class Solution {
public:
    int helper(vector<int>& coins, int amount, vector<int>& dp){
        if(amount == 0) return 0;
        if(amount < 0) return INT_MAX;
        if(dp[amount] != -1) return dp[amount];

        int mini = INT_MAX;
        for(int i=0; i<coins.size(); i++){
            if(amount - coins[i] >= 0){
                int ans = helper(coins, amount-coins[i], dp);
                if(ans != INT_MAX) mini = min(mini, ans+1);
            }
        }
        return dp[amount] = mini;
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1, -1);
        int ans = helper(coins, amount, dp);
        if(ans == INT_MAX) return -1;
        return ans;
    }
};

// Approach :  Buttom up
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1, INT_MAX);
        int mini = INT_MAX;
        dp[0] = 0;

        for(int i=1; i<=amount; i++){
            for(int j=0; j<coins.size(); j++){
                if(i - coins[j] >= 0 && dp[i - coins[j]] != INT_MAX){
                    dp[i] = min(dp[i], dp[i - coins[j]] + 1);
                }
            }
        }

        if(dp[amount] != INT_MAX) return dp[amount];
        return -1;
    }
};