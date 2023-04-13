#include<bits/stdc++.h>
using namespace std;

// solution 
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        vector<int>::iterator lower, upper;
        lower = lower_bound(nums.begin(), nums.end(), target);
        return (lower - nums.begin());
    }
};