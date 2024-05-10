class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<pair<double, pair<int, int>>> pairs;
        int n = arr.size();
        
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                double fraction = static_cast<double>(arr[i]) / arr[j];
                pairs.push_back({fraction, {arr[i], arr[j]}});
            }
        }
        
        sort(pairs.begin(), pairs.end());
        
        vector<int> ans;
        ans.push_back(pairs[k - 1].second.first);
        ans.push_back(pairs[k - 1].second.second);
        
        return ans;
    }
};