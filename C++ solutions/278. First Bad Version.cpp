// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long f=1,l=n;
        long long m=0;
        while(f<=l){
            m=(f+l)/2;
            if(isBadVersion(m)==true) l=m-1;
            else if(isBadVersion(m)==false) f=m+1;
        }
        return f;
    }
};