class Solution {
public:
    static bool sortByValue(const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    }
    
    vector<int> div(int n){
        vector<int>v;
        for(int i=2; i*i<=n; i++){
            if(n % i == 0) {
                v.push_back(i);
                if (i != n / i) v.push_back(n / i);
            }
        }
        v.push_back(n);  
        return v;
    }
    
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int, int>mp;
        for(int i=0; i<deck.size(); i++){
            mp[deck[i]]++;
        }
    
        vector<pair<int, int>>pairs(mp.begin(), mp.end());
        sort(pairs.begin(), pairs.end(), sortByValue);

        if(pairs[0].second == 1) return false;
        if(mp.size() == 1) return true;
        vector<int> divisors = div(pairs[0].second);
        for(int i=0; i<divisors.size(); i++){
            bool flag = true;
            for(int j=1; j<pairs.size(); j++){
                if(pairs[j].second % divisors[i] != 0){
                    flag = false;
                    break;
                }
            }
            if(flag) return true;
        }

        return false;
    }
};
