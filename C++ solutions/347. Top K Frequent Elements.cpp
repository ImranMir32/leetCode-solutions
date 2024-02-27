class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> pp;
        if (nums.empty()) return {};

        sort(nums.begin(), nums.end()); 
        int cnt = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                cnt++;
            } else {
                pp.push_back(make_pair(cnt, nums[i - 1]));
                cnt = 1;
            }
        }
        
        pp.push_back(make_pair(cnt, nums[nums.size() - 1]));

        sort(pp.begin(), pp.end(), greater<pair<int,int>>()); 

        vector<int> ans;
        for (int i = 0; i < k && i < pp.size(); i++) {
            ans.push_back(pp[i].second);
        }
        return ans;
    }
};