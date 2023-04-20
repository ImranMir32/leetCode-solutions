#include<bits/stdc++.h>
using namespace std;

// solution
class Solution {
public:
    int integerBreak(int n) {
        if(n<=3) return n-1;
        int cnt=0,r=1;
        if(n%3==0) cnt=n/3;
        else{
            if(n%3==1){
                cnt=(n/3)-1;
                r=(n%3)+3;
            }
            else{
                cnt=(n/3);
                r=n%3;
            }
        }

        int ans=1;
        for(int i=0;i<cnt;i++) ans*=3;
        return ans*=r;
    }
};