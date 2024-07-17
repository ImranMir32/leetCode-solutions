class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;
        long long cnt = 1;
        while(1){
            if(cnt == n) return true;
            if(cnt > n) break;
            cnt *= 3;
        }
        
        return false;
    }
};