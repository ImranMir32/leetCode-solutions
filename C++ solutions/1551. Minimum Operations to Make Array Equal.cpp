class Solution {
public:
    int minOperations(int n) {
        long long sum=0;
        for(int i=0;i<n;i++) sum+=(2*i)+1;
        sum/=n;
        long long ans=0;
        for(int i=1;i<=sum;i+=2) ans+=abs(sum-i);
        return ans;
    }
};