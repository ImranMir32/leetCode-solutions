class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>presum;
        
        for(int i=1;i<prices.size();i++){
            presum.push_back(prices[i] - prices[i - 1]);
        }
        
        long long ans = 0;
        for(int i=0;i<presum.size();i++){
            if(presum[i]>0) ans+=presum[i];
        }
        return ans;
    }
};