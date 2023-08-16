class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>sto,stc;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                sto.push(s[i]);
            }else{
                if(!sto.empty()){
                    sto.pop();
                }
                else stc.push(s[i]);
            }
        }
        return sto.size()+stc.size();
    }
};