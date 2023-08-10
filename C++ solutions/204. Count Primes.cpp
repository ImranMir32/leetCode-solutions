class Solution {
public: 
    vector<bool>visit;
    int countPrimes(int n) {
        visit.resize(n + 1, false);
        for(int i=2;i*i<=n;i++){
            if(!visit[i]){
                for (int j = i * i; j <= n; j += i) {
                    visit[j] = true;
                }
            }
        }
        int cnt=0;
        for(int i=2;i<n;i++) if(!visit[i]) cnt++;
        return cnt;;
    }
};