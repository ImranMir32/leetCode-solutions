#include<bits/stdc++.h>
using namespace std;

// solution 
class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int alice=0,bob=0;
        int len=piles.size(),k=1;
        for(int i=0,j=len-1;i<j;){
            if(k%2){
                if(piles[i]>=piles[j]){
                    alice+=piles[i];
                    i++;
                }
                else{
                    alice+=piles[j];
                    j--;
                }
            }
            else{
                if(piles[i]>=piles[j]){
                    bob+=piles[i];
                    i++;
                }
                else{
                    bob+=piles[j];
                    j--;
                }
            }
        }
        if(alice>bob) return true;
        else return false;
    }
};