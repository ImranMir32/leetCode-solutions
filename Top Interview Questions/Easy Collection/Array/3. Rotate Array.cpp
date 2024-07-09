class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int rem = k % n;
        vector<int>ans;
        
        for(int i=n-rem; i<n; i++) ans.push_back(nums[i]);
        for(int i=0; i<n-rem; i++) ans.push_back(nums[i]);
        
        for(int i=0; i<n; i++) nums[i]=ans[i];
            
    }
};