#include<bits/stdc++.h>
using namespace std;

// solution
class Solution {
public:
    bool isPowerOfFour(int n) {
        int x=0;
        while(1){
            if(pow(4,x)==n) return true;
            if(pow(4,x)>n) return false;
            x++;
        }
    }
};
