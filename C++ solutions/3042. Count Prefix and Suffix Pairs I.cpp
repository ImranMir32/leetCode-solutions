class Solution {
public:
    bool isCount(string str1, string str2){
        if(str1.size()>str2.size()) return false;
        bool prefix=true, suffix=true;
        for(int i=0; i<str1.size(); i++){
            if(str1[i] != str2[i]) {
                prefix=false;
                break;
            }
        }
        int k=str2.size(), l=str1.size();
        for(int i=0; i<str1.size(); i++){
            if(str1[i] != str2[k-l+i]) {
                suffix=false;
                break;
            }
        }
        

        return prefix && suffix;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans=0;
        for(int i=0; i<words.size(); i++){
            for(int j=i+1; j<words.size(); j++){
                string str1=words[i];
                string str2=words[j];
                if(isCount(str1, str2)) ans++;
            }
        }
        return ans;
    }
};