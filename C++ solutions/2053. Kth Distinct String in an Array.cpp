class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;
        for (const string& str : arr) {
            mp[str]++;
        }

        int cnt = 0;
        for (const string& str : arr) {
            if (mp[str] == 1) {
                cnt++;
                if (cnt == k) {
                    return str;
                }
            }
        }
        return "";
    }
};
