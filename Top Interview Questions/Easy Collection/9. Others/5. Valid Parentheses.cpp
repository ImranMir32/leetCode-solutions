class Solution {
public:
    bool isValid(string s) {
        if(s.size()<=1 || s[0]==')' || s[0]=='}' || s[0]==']') return false;
        stack<char>q;
        for(int i=0;i<s.size();i++){
           if(s[i]=='(' || s[i]=='{' || s[i]=='[') q.push(s[i]);
           else if(s[i]==')'){
               if(q.size()>0 && q.top()=='(') q.pop();
               else q.push(s[i]);
           }
           else if(s[i]=='}'){
               if(q.size()>0 && q.top()=='{') q.pop();
               else q.push(s[i]);
           }
           else if(s[i]==']'){
               if(q.size()>0 && q.top()=='[') q.pop();
               else q.push(s[i]);
           }
        }

        

        if(q.size()>0) return false;
        return true;
        
    }
};