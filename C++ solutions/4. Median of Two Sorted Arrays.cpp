#include<bits/stdc++.h>
using namespace std;

// solution 
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(int i=0;i<nums1.size();i++) v.push_back(nums1[i]);
        for(int i=0;i<nums2.size();i++) v.push_back(nums2[i]);
        sort(v.begin(),v.end());
        int len=v.size();
        if(len%2!=0) return double(v[len/2]);
        len/=2;
        double ans=double(v[len]+v[len-1])/2;
        return ans;

    }
};