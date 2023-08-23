class Solution {
public:
    string reorganizeString(string s) {
        map<char, int> m;
        for (int i = 0; i < s.size(); i++) {
            m[s[i]]++;
        }
        int mx = 0;
        vector<pair<int, char>> p;
        for (auto k : m) {
            mx = max(mx, k.second);
            p.push_back({ k.second, k.first });
        }
        sort(p.begin(), p.end(), [](const pair<int, char>& a, const pair<int, char>& b) {
            return a.first > b.first;
        });

        int len = s.size();
        if (mx > (len + 1) / 2) return ""; // Modified this line

        string ans(len, ' ');
        int i = 0;
        for (int j = 0; j < p.size(); j++) {
            while (p[j].first > 0) {
                if (i >= len) i = 1;
                ans[i] = p[j].second;
                i += 2;
                p[j].first--;
            }
        }
        return ans;
    }
};