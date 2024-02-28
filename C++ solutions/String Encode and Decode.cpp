class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs.size();i++){
            int len=strs[i].size();
            ans+=to_string(len);
            ans+="#";
            ans+=strs[i];
        }
        return ans;
    }
    
    vector<string> decode(string s) {
        vector<string>ans;
        int len=0,start=0;
        
        for(int i=1;i<s.size();){
            if(s[i]=='#') {
                len=s[i-1]-'0';
                start=i+1;
                i+=(len+2);
            }
            else if(s[i+1]=='#' && i+1<=s.size()) {
                len=(s[i-1]-'0')*10+(s[i]-'0');
                start=i+2;
                i+=(len+3);
            }
            else if(s[i+2]=='#' && i+2<=s.size()) {
                len=(s[i-1]-'0')*100+(s[i]-'0')*10+(s[i+1]-'0');
                start=i+3;
                i+=(len+4);
            }
            
            string st="";
            for(int j=start;j<start+len;j++){
                st+=s[j];
            }
            ans.push_back(st);
        }
        return ans;
    }
};
