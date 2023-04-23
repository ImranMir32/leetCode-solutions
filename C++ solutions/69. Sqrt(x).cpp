#include<bits/stdc++.h>
using namespace std;

// solution 
//Approach :1 
class Solution {
public:
    vector<unsigned int>v;
    void preCal(){
        v.push_back(0);
        long long x=1;
        while(1){
            if(x*x>2147483647) break;
            v.push_back(x*x);
            x++;
        }
        v.push_back(x*x);
    }
    int mySqrt(int x) {
        preCal();
        int left = 0, right = v.size() - 1, ans = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (v[mid] >= x) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return v[ans]==x ? ans : ans-1;
    }
};

//Approach :2 
class Solution {
public:
  
    int mySqrt(int x) {
       return sqrt(x);
    }
};