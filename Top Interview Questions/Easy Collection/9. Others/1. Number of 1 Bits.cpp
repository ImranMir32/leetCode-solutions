class Solution {
public:
    int count(long long n, long long cnt){
        if(n == 0) return cnt;
        if(n % 2) cnt++;
        
        return count(n/2, cnt);
    }
    
    int hammingWeight(int n) {
        return count(n, 0);
    }
};