class Solution {
public:
    int dp[31];
    int fib(int n) {
        if(n == 0) return dp[0] = 0;
        if(n == 1) return dp[1] = 1;
        if(dp[n] != 0) return dp[n];

        return dp[n] = fib(n-1) + fib(n-2);
    }
};