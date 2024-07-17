class Solution {
public:
    int seive(int n){
        vector<bool>isPrime(n+1, true);
        for(int i=2; i*i<n; i++) {
            if (isPrime[i]) {
                for(int j=i*i; j<n; j+=i) {
                    isPrime[j] = false;
                }
            }
        }

        int cnt = 0;
        for(int i=2; i<n; i++) {
            if(isPrime[i]) {
                cnt++;
            }
        }
        return cnt;
    }
    
    int countPrimes(int n) {
        return seive(n);
    }
};