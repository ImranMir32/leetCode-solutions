#include<bits/stdc++.h>
using namespace std;

// solution
class Solution {
public:
    vector<int> primes;
    bool isprime(int n){
        if(n==1) return 0;
        for(int i=2;i*i<=n; i++){
            if(n%i==0) return 0;
        }
        return 1;
    }
    
    int diagonalPrime(vector<vector<int>>& nums) {
        int n=nums.size(),mx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j && isprime(nums[i][j])) mx=max(mx,nums[i][j]);
                if(j==n-i-1 &&  isprime(nums[i][j])) mx=max(mx,nums[i][j]);
            }
        }
        return mx;
    }
};