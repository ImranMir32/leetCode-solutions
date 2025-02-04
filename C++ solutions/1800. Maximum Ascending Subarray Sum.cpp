class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum=nums[0], ans=INT_MIN;
        int n=nums.size();
        for(int i=1; i<n; i++){
            if(nums[i]>nums[i-1]) sum += nums[i];
            else{
                ans=max(ans, max(nums[i], sum));
                sum=nums[i];
            }
        }
        ans=max(ans, max(nums[n-1], sum));
        return ans;
    }
};