#include<bits/stdc++.h>
using namespace std;

// solution
//approach : 1
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        return (n*(n+1)/2)-sum;
    }
};

//approach :2
class Solution {
public:
    int missingNumber(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++){
           if(i!=nums[i]) return i;
       }
       return nums.size();
    }
};

//approach : 3
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<=nums.size();i++){
            m[i]++;
        }
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto k:m){
            if(k.second==1) return k.first;
        }
        return 0;
    }
};