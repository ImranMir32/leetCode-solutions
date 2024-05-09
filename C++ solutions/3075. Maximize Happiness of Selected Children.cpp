class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        
        sort(happiness.begin(), happiness.end(), greater<int>());
        long long ans = happiness[0];
        int cnt = 0;
        k -= 1;
        cnt = 1;
        int n = happiness.size();
        for (int i = 1; i < n; ++i) {
            if (k == 0) {
                break;
            }
            if (happiness[i] - cnt > 0) {
                ans += abs(happiness[i] - cnt);
            }
            k -= 1;
            cnt += 1;
        }
        
        return ans;
    }
};