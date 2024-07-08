class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>v(n + 1, 0);
        int cnt=0, ind=1, cntk=0;
        while(1){
            if(n-cnt == 1) break;
            
            if(v[ind] == 0) cntk++;

            if(cntk == k){
                v[ind] = 1;
                cntk = 0;
                cnt++;
            }
            
            if(ind == n) ind = 0;
            ind++;
        }

        for(int i=1; i<=n; i+=1){
            if(v[i]==0) return i;
        }
        return 0;
    }
};