#include<bits/stdc++.h>
using namespace std;

// solution
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len=digits.size();
        vector<int>v;
        int carry=0;
        for(int i=len-1;i>=0;i--){
          if((digits[i]==9 && i==len-1) || digits[i]+carry==10){
              v.push_back(0);
              carry=1;
          }
          else if(carry ||  i==len-1){
              v.push_back(digits[i]+1);
              carry=0;
          }
          else v.push_back(digits[i]);
        }
        if(carry) v.push_back(1);
        reverse(v.begin(),v.end());
        return v;
      
    }
};