#include<bits/stdc++.h>
using namespace std;

// solution
class Solution {
    map<int,int>m;
public:
    int minimumCardPickup(vector<int>& cards) {
        int n=cards.size();
        int mn=INT_MAX;
        for(int i=1;i<=n;i++){
            m[cards[i-1]]++;
            if(m[cards[i-1]]==1) m[cards[i-1]]=i;
            else if(m[cards[i-1]]!=1){
                int x=m[cards[i-1]]-1;
                mn=min(mn,abs(x-i)+1);
                m[cards[i-1]]=i;
            }
        }
        if(m.size()==n) return -1;
        return mn;
    }
};