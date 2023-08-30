class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        string st="",ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' && st!=""){
               v.push_back(st);
               st="";
            }
            else if(s[i]!=' ') st+=s[i];
        }
        if(st!="") v.push_back(st);

        reverse(v.begin(),v.end());
        
        for(int i=0;i<v.size();i++){
            ans+=v[i];
            if(i!=v.size()-1) ans+=" ";
        }
        return ans;
    }
};