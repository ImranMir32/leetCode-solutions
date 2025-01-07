class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()) return false;
        sort(word1.begin(), word1.end());
        sort(word2.begin(), word2.end());
        if(word1==word2) return true;

        map<char, int>mp1,mp2;
        for(int i=0; i<word1.size(); i++){
            mp1[word1[i]]++;
        }
        for(int i=0; i<word2.size(); i++){
            if(!mp1[word2[i]]) return false;
            mp2[word2[i]]++;
        }
        vector<int>v1, v2;
        for(auto k:mp1) v1.push_back(k.second);
        for(auto k:mp2) v2.push_back(k.second);
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        if(v1==v2) return true;
        return false;
    }
};