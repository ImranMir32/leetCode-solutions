// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long left = 0, right = n, bad = 1;
        
        while(left <= right){
            long long mid = (left + right) / 2;
            if(isBadVersion(mid)){
                bad = mid;
                right = mid -1;
            }
            else left = mid + 1;
        }
        
        return bad;
    }
};
