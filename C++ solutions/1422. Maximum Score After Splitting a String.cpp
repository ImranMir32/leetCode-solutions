class Solution {
public:
    int maxScore(string s) {
        int mx=0, zero=0;
        for(int i=0; i<s.size()-1; i++){
            if(s[i]=='0') zero++;
            int one=0;
            for(int j=i+1; j<s.size(); j++){
                if(s[j]=='1') one++;
            }
            mx= max(mx, zero+one);
        }
        return mx;
    }
};