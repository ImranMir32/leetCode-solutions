#include<bits/stdc++.h>
using namespace std;

// solution : 1
class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> pref(n,0);
        int ones = boxes[0] == '1';
        for(int i = 1; i < n; ++i){
            pref[i] = pref[i-1] + ones;
            if(boxes[i] == '1') ones++;
        }
        ones = 0;
        int prev = 0;
        for(int i = n-1; i >= 0; --i){
            pref[i] = pref[i] + prev;
            if(boxes[i] == '1'){
                ones++;
            }
            prev += ones;
        }
        return pref;
    }
};


// solution :2
class Solution {
public:
    vector<int> minOperations(string boxes) {
        int len=boxes.size();
        vector<int>v;
        for(int i=0;i<len;i++){
            if(boxes[i]=='0') v.push_back(0);
            else v.push_back(i+1);
        }
        vector<int>res;
        for(int i=0;i<len;i++){
            int ans=0;
            for(int j=0;j<len;j++){
                if(v[j]!=0) ans+=abs((i-v[j]+1));
            }
            res.push_back(ans);
        }
        return res;
    }
};