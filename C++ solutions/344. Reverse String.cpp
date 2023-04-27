#include<bits/stdc++.h>
using namespace std;

// solution 
//approcah : 1
class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=0,j=s.size()-1;i<j;i++,j--){
            swap(s[i],s[j]);
        }
    }
};

//approach : 2
class Solution {
public:
    void recursively(vector<char>& s, int i,int j){
        if(i>=j) return;
        swap(s[i],s[j]);
        return recursively(s,i+=1,j-=1);
    }
    void reverseString(vector<char>& s) {
       recursively(s,0,s.size()-1);
    }
};