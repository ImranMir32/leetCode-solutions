class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0,j=nums.size()-1;i<j;i++,j--){
            ans=max(ans,nums[i]+nums[j]);
        }

        if(nums.size()%2) ans=max(ans,(nums[nums.size()/2]+nums[(nums.size()/2)+1]));
        return ans;
    }
};