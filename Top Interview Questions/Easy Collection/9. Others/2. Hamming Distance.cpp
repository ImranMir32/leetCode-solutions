class Solution {
public:
    string intToBinary(long long n, string s){
        if(n == 0) return s;
        if(n % 2) s += "1";
        else s += "0";
        
        return intToBinary(n/2, s);
    }
    
    int hammingDistance(int x, int y) {
        string s = intToBinary(x, "");
        string st = intToBinary(y, "");
        
        if(s.size() > st.size()){
            string temp = s;
            s = st;
            st = temp;
        }
        
        for(int i=s.size(); i<st.size(); i++) s+="0";
        
        int cnt = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] != st[i]) cnt++;
        }
        
        return cnt;
    }
};