#include<bits/stdc++.h>
using namespace std;

// solution
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum=0;
        for(int i=1;i<prices.size();i++)
            sum+=max(prices[i]-prices[i-1],0);
        return sum;
    }
};