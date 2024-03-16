class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=0,sum=0,mx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum<0) sum=0;
            else ans=max(ans,sum);
            mx=max(mx,nums[i]);
        }
        if(mx<=0) return mx;
        return ans;
    }
};