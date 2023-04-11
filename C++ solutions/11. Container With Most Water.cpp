#include<bits/stdc++.h>
using namespace std;

// solution 
class Solution {
public:
    int maxArea(vector<int>& height) {
        long long mx=0;
        int len=height.size();
        for(int i=0,j=len-1;i<j;){
            if(height[i]<=height[j]){
                long long ans=min(height[i],height[j]);
                ans*=abs(i-j);
                mx=max(mx,ans);
                i++;
            }
            else{
                long long ans=min(height[i],height[j]);
                ans*=abs(i-j);
                mx=max(mx,ans);
                j--;
            }
        }
        return mx;
    }
};

