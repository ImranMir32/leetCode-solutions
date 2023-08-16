class Solution {
public:
    int partitionString(string s) {
        map<char,int>m;
        int cnt=1;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
            if(m[s[i]]==2){
                cnt++;
                m.clear();
                m[s[i]]++;
            }
        }
        return cnt;
    }
};