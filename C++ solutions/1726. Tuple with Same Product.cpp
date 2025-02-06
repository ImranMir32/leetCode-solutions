class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        map<int, int>mp;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                long long dot=nums[i]*nums[j];
                mp[dot]++;
            }
        }
        long long ans=0;
        for(auto k:mp){
            int n=k.second-1;
            n=(n*(n+1))/2;
            ans += n*8;
        }
        return ans;
    }
};