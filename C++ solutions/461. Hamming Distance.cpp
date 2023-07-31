class Solution {
public:
    int hammingDistance(int x, int y) {
        string s,st;
        if(x<y){
            int temp=x;
            x=y;
            y=temp;
        }
        while(x!=0){
            int r=0;
            if(x%2) r=1;
            s+=to_string(r);
            x/=2;
        }
        while(y!=0){
            int r=0;
            if(y%2) r=1;
            st+=to_string(r);
            y/=2;
        }
        for(int i=st.size();i<s.size();i++) st+="0";
        int cnt=0;
        for(int i=s.size();i>=0;i--){
            if(s[i]!=st[i]) cnt++;
        }
        return cnt;
    }
};