class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long total_sum=0, cur_sum=0;
        for(int i=0; i<nums.size(); i++) total_sum += nums[i];
        int ans=0;
        for(int i=0; i<nums.size()-1; i++){
            cur_sum += nums[i];
            total_sum -= nums[i];
            if(cur_sum>=total_sum) ans++;
        }
        return ans;
    }
};