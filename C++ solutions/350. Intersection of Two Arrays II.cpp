#include<bits/stdc++.h>
using namespace std;

// solution
//approach : 1
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> ans;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]==nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]) i++;
            else j++;
        }
        return ans;
    }
};

//approach : 2
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> count;
        vector<int> ans;
        for(int i=0;i<nums1.size();i++)
        {
            count[nums1[i]]++;
        }
        
        for(int i=0;i<nums2.size();i++)
        {
            if(count[nums2[i]])
            {
                ans.push_back(nums2[i]);
                count[nums2[i]]--;
            }
        }
        return ans;
    }
};

//approach : 3
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    v.push_back(nums1[i]);
                    nums2[j]=-1;
                    break;
                }
            }
        }
        return v;
    }
};

// approach : 4
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m1,m2;
        vector<int>v;
        for(int i=0;i<nums1.size();i++){
            m1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            m2[nums2[i]]++;
        }
        for(auto i:m1){
            for(auto j:m2){
                if(i.first==j.first){
                    for(int k=0;k<min(i.second,j.second);k++) v.push_back(i.first);
                }
            }
        }
        return v;
    }
};