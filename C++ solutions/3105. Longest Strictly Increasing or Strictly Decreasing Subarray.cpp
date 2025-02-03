class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int mx1=1, mx2=1, ans=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] > nums[i]){
                mx1++;
                mx2=1;
            }
            if(nums[i-1] < nums[i]){
                mx1=1;
                mx2++;
            }
            if(nums[i-1] == nums[i]) {
                mx1=1;
                mx2=1;
            }
            ans=max(ans, max(mx1, mx2));
        }
        return ans;
    }
};