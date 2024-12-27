class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        int ans = 0;
        int value_i = values[0];
        for(int j=1; j<n; j++){
            ans = max(ans, value_i + values[j]-j);
            value_i = max(value_i, values[j]+j);
        }

        return ans;
    }
};