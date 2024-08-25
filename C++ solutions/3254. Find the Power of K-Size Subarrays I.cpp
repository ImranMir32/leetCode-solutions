class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int>ans;
        for(int i=0; i<nums.size()-k+1; i++){
            bool flag = true;
            int mx = nums[i];
            for(int j=i+1; j<i+k; j++){
                if (nums[j] != nums[j - 1] + 1){
                    flag = false;
                }
                mx = max(mx, nums[j]);
            }
            if(flag) ans.push_back(mx); 
            else ans.push_back(-1);   
        }
        return ans;
    }
};