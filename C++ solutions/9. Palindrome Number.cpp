#include<bits/stdc++.h>
using namespace std;

// solution
class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        string st=s;
        reverse(st.begin(),st.end());
        if(s==st) return true;
        else return false;
    }
};