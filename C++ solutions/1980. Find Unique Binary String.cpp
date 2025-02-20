class Solution {
    public:
        string findDifferentBinaryString(vector<string>& nums) {
            int n = nums.size();
            string ans = string(n, '0');
            map<string, int>mp;
            for(int i=0; i<n; i++) mp[nums[i]] = 1;
            if(!mp[ans]) return ans;
            for(int i=0; i<n; i++) {
                ans[i] = '1';
                if(!mp[ans]) return ans;
                ans[i] = '0';
            }
            return ans;
        }
    };