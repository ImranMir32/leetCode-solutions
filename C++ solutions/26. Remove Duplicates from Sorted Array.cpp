#include<bits/stdc++.h>
using namespace std;

// solution 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++) m[nums[i]]++;
        int ind=0;
        for(auto k:m) nums[ind++]=k.first;
        return m.size();
    }
};