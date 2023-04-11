#include<bits/stdc++.h>
using namespace std;

// solution 
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len=nums.size();
        vector<int>v;
        for(int i=0;i<len;i++)
            if(nums[i]!=val) v.push_back(nums[i]);
        
        for(int i=0;i<v.size();i++) nums[i]=v[i];
        
        return v.size();
    }
};