class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int ind=abs(nums[i])-1;
            if(nums[ind]>0){
                nums[ind]=(-nums[ind]);
            }
            else ans.push_back(abs(nums[i]));
        }
        return ans;
    }
};