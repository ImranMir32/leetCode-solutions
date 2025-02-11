class Solution {
    public:
        string removeOccurrences(string s, string part) {
            stack<char>st;
            int n=s.size();
            int l=part.size();
            for(int i=0; i<n; i++){
                st.push(s[i]);
                if(st.size() >= l && s[i] == part[l-1]){
                    bool flag = true;
                    string extra = "";
                    int k=l;
                    while(k--){
                        extra += st.top();
                        st.pop();
                    }
                    reverse(extra.begin(), extra.end());
                    if(extra ==  part) flag = false;
    
                    if(flag) {
                        for(int i=0; i<l; i++) st.push(extra[i]);
                    }
                }
            }
    
            string ans="";
            while(!st.empty()){
                ans += st.top();
                st.pop();
            }
            reverse(ans.begin(), ans.end());
            return ans;
    }
};