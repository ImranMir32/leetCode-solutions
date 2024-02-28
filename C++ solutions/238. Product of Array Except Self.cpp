class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pre,suf,ans;
        pre.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            pre.push_back(pre[i-1]*nums[i]);
        }

        suf.push_back(nums[nums.size()-1]);
        for(int i=nums.size()-2,j=0;i>=0;i--,j++){
            suf.push_back(suf[j]*nums[i]);
        }
        reverse(suf.begin(), suf.end());

        ans.push_back(suf[1]);
        for(int i=1;i<nums.size()-1;i++){
            ans.push_back(pre[i-1]*suf[i+1]);
        }
        ans.push_back(pre[pre.size()-2]);
        return ans;
    }
};