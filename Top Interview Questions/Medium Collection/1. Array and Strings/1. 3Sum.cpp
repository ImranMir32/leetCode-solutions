class Solution {
public:       
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>st;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1, k=nums.size()-1;j<k;){
                if(nums[i]+nums[j]+nums[k] == 0){
                    st.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k]>0) k--;
                else j++;
            }
        }
        
        vector<vector<int>>ans;
        for(auto& v:st){
            ans.push_back(v);
        }
        
        return ans;
    }
};