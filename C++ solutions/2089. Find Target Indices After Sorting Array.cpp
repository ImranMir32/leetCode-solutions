//approach 1: Linear search 
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target) ans.push_back(i);
        }
        return ans;
    }
};

// approach :2 Binary search
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        auto lower = lower_bound(nums.begin(), nums.end(), target);
        auto upper = upper_bound(nums.begin(), nums.end(), target);

        vector<int>ans;
        for(int i=(lower - nums.begin());i<(upper - nums.begin());i++){
            if(nums[i]==target) ans.push_back(i);
        }
        return ans;
    }
};