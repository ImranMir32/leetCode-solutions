class Solution {
public:
    int myAtoi(string s) {
        string ans = "", sign = ""; 
        for(int i=0; i<s.size(); i++){
            if(s[i]==' ' && ans == "" && sign == "") continue;
            if((s[i] =='-' || s[i]=='+') && ans == "" && sign == ""){
                sign = s[i];
                continue;
            }
            if(s[i] >= '0' && s[i] <= '9'){
                ans += s[i];
            }
            else break;
        }
        if(ans == "") return 0;
        
        long long res = 0;
        for(int i=0; i<ans.size(); i++){
            if(res == 0 && ans[i] == '0') continue;
            res = (res * 10) + (ans[i] - '0');  
            
            if(sign == "-") res *= (-1);
            if(res > INT_MAX) return INT_MAX;
            if(res < INT_MIN) return INT_MIN;
            if(sign == "-") res *= (-1);
        }
        if(sign == "-") res *= (-1);
        
        if(res > INT_MAX) return INT_MAX;
        if(res < INT_MIN) return INT_MIN;
        return res;
        
    }
};