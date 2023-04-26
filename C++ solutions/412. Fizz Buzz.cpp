#include<bits/stdc++.h>
using namespace std;

// solution
//approach : 1
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>v;
        for(int i=1;i<=n;i++){
            if(i%3==0 && i%5==0) v.push_back("FizzBuzz");
            else if(i%3==0) v.push_back("Fizz");
            else if(i%5==0) v.push_back("Buzz");
            else{
                string str= to_string(i);  
                v.push_back(str);
            }
        }
        return v;
    }
};

//approach : 2
class Solution {
public:
    vector<string>v;
    void preCal(){
        for(int i=1;i<=10000+7;i++){
            if(i%3==0 && i%5==0) v.push_back("FizzBuzz");
            else if(i%3==0) v.push_back("Fizz");
            else if(i%5==0) v.push_back("Buzz");
            else{
                string str= to_string(i);  
                v.push_back(str);
            }
        }

    }
    vector<string> fizzBuzz(int n) {
        preCal();
        vector<string>ans;
        for(int i=0;i<n;i++) ans.push_back(v[i]);
        return ans; 
    }
};