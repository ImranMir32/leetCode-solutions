#include<bits/stdc++.h>
using namespace std;

// solution 
class Solution {
public:
    string defangIPaddr(string address) {
       int len=address.size();
       string ans="";
       for(int i=0;i<len;i++){
           if(address[i]!='.') ans+=address[i]; 
           else ans+="[.]";
       }
       return ans;
    }
};