class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len=nums.size();
        vector<int>v,ans;
        for(int i=0;i<=len;i++) v.push_back(0);

        for(int i=0;i<len;i++) v[nums[i]]=1;

         for(int i=1;i<=len;i++){
             if(v[i]==0) ans.push_back(i);
         }
         return ans;
    }
};