#include<bits/stdc++.h>
using namespace std;

// solution
class Solution {
public:
    bool isValid(string s) {
        if(s.size()<=1 || s[0]==')' || s[0]=='}' || s[0]==']') return false;
        stack<char>st;
        for(int i=0;i<s.size();i++){
           if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
           else if(s[i]==')'){
               if(st.size()>0 && st.top()=='(') st.pop();
               else st.push(s[i]);
           }
           else if(s[i]=='}'){
               if(st.size()>0 && st.top()=='{') st.pop();
               else st.push(s[i]);
           }
           else if(s[i]==']'){
               if(st.size()>0 && st.top()=='[') st.pop();
               else st.push(s[i]);
           }
        }
        if(st.size()>0) return false;
        return true;
    }
};