class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<=1) return s.size();
        int ans=0;
        for(int i=0;i<s.size();){
            map<char,int>m;
            for(int j=i;j<s.size();j++){
               //cout<<i<<" "<<endl;
                if(m[s[j]]){
                    int len=m.size();
                    ans=max(ans,len);
                    i=m[s[j]]+1;
                    break;
                }else{
                    m[s[j]]=j;
                }
                if(j==s.size()-1){
                    i=s.size();
                    int len=m.size();
                    ans=max(ans,len);
                    break;
                }
            }
        }
        return ans;
    }
};