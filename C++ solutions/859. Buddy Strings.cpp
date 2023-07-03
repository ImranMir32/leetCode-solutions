class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        if(s==goal){
            map<char,int>m;
            for(int i=0;i<s.size();i++) m[s[i]]++;
            for(auto k:m) if(k.second>=2) return true;
            return false;
        }
        int pos1=-1,pos2=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i] && pos1==-1) pos1=i;
            else if(s[i]!=goal[i] && pos2==-1) pos2=i;
            else if(s[i]!=goal[i]) return false;
        }
        if(pos1==-1 || pos2==-1) return false;
        swap(s[pos1],s[pos2]);
        if(s==goal) return true;
        return false;

    }
};