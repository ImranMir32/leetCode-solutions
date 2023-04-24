#include<bits/stdc++.h>
using namespace std;

// solution
class Solution {
public:
    int climbStairs(int n) {
        if(n==1||n==2||n==3) return n;
        int first = 2, second = 3;
        for(int i = 4; i <= n; i++){
            int fibo = first+second;
            first = second;
            second = fibo;
        }
        return second;
    }
};