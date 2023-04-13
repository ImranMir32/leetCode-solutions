#include<bits/stdc++.h>
using namespace std;

// solution 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        v=nums;
        int x=0,y=0;
        sort(nums.begin(),nums.end());
        for(int i=0,j=nums.size()-1;i<j;){
            if(nums[i]+nums[j]==target){
                x=nums[i];
                y=nums[j];
                break;
            }
            else if(nums[i]+nums[j]<target) i++;
            else j--;
        }
        int cnt=0;
         vector<int>vv;
        for(int i=0;i<v.size();i++){
            if(v[i]==x){
                vv.push_back(i);
                cnt++;
            }
            else if(v[i]==y){
                vv.push_back(i);
                cnt++;
            }
            if(cnt==2) break;
        }
        return vv;
    }
};