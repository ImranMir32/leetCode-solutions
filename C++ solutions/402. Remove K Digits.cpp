class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans="";
        for(char &ch:num)
        {
            while(ans.size() && ans.back()>ch && k)
            {
                ans.pop_back();
                k--;
            }
            if(ans.size() || ch!='0') ans.push_back(ch);
        }
        while(ans.size() && k--) ans.pop_back();
        
        return (ans=="") ? "0" : ans;
    }
};