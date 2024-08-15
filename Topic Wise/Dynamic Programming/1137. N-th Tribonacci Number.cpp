class Solution {
public:
    int dp[38];
    int tribonacci(int n) {
        if(n == 0) return dp[0] = 0;
        if(n == 1 || n == 2) {
            dp[1] = 1;
            return dp[2] = 1;
        }
        if(dp[n] != 0) return dp[n];
        
        return dp[n] = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
    }
};