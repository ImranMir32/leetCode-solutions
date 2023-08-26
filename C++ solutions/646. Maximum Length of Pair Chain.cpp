class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        if(pairs.size() ==0 ) return 0;
        sort(pairs.begin(), pairs.end());

        int curr=INT_MAX,res=0;
    
        for(int i=pairs.size()-1;i>=0;i--)
        {
            if(pairs[i][1]<curr)
            {
                res++;
                curr=pairs[i][0];
            }
        }
        return res;
    }
};
