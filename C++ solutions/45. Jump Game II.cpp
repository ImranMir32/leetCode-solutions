#include<bits/stdc++.h>
using namespace std;

// solution 
class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1) return 0;
    
        if(nums[0]+1>=nums.size()) return 1;

        int count=0 ,i=0;
        while(i<nums.size())
        {
            if(i==nums.size()-1) return count;
            
            int maxjump=nums[i],jumpinx=i;
            for(int j=i+1;j<=i+nums[i] && j<nums.size();j++)
            {
                if(maxjump+jumpinx<=nums[j]+j)
                {
                    maxjump=nums[j];
                    jumpinx=j;
                }
                if(j==nums.size()-1) return count+1;
                
            }
            i=jumpinx;
            count++;
        }
        return count;
    }
};