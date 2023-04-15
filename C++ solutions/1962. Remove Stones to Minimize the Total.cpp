#include<bits/stdc++.h>
using namespace std;

// solution
class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        for(auto i:piles) pq.push(i);
        while(k--) {
            int n=pq.top();
            pq.pop();
            pq.push(n-n/2);
        }
        int sum=0;
        while(pq.size()) {
            sum+=pq.top(); 
            pq.pop();
        }
        return sum;
    }
};