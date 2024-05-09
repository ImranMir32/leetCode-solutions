class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int, int>> pairs;
        int n = score.size();
        for (int i = 0; i < n; ++i) {
            pairs.push_back({score[i], i});
        }

        sort(pairs.begin(), pairs.end(), greater<pair<int, int>>());

        vector<string> ans(n, "");

        int cnt = 1;
        for (auto& pair : pairs) {
            if (cnt == 1) {
                ans[pair.second] = "Gold Medal";
            } else if (cnt == 2) {
                ans[pair.second] = "Silver Medal";
            } else if (cnt == 3) {
                ans[pair.second] = "Bronze Medal";
            } else {
                ans[pair.second] = to_string(cnt);
            }
            cnt++;
        }

        return ans;
    }
};