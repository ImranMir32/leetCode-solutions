class Solution {
public:
    int minimumPushes(string word) {
        map<char, int> mp;
        vector<pair<int, char>> pairs;

        for (int i = 0; i < word.size(); i++) {
            mp[word[i]]++;
        }
        for (auto k : mp) {
            pairs.push_back({k.second, k.first});
        }

        sort(pairs.begin(), pairs.end(), greater<pair<int, char>>());
        int ans = 0, cnt = 1, k = 0;
        for (int i = 0; i < pairs.size(); i++) {
            ans += (cnt * pairs[i].first);
            k++;
            if (k == 8) {
                cnt++;
                k = 0;
            }
        }
        return ans;
    }
};
