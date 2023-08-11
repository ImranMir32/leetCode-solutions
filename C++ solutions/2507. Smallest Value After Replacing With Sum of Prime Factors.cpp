class Solution {
public:
    int findAns(int n){
        int ans=0;
        while(n%2==0){
            ans+=2;
            n/=2;
        }
        int res=sqrt(n);
        for(int i=3;i<=res;i+=2){
            while(n%i==0){
                ans+=i;
                n/=i;
            }
        }
        if(n>2) ans+=n;
        return ans;
    }
    int smallestValue(int n) {
        while(1){
            int ans=findAns(n);
            if(ans==n) return n;
            n=ans;
        }
        return n;
    }
};