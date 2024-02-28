class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return 0;
        
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>v;
        for(auto k:mp) v.push_back(k.first);

        int cnt=1,ans=0;
        for(int i=1;i<v.size();i++){
            if(v[i]-v[i-1]==1) cnt++;
            else{
                ans=max(ans,cnt);
                cnt=1;
            }
        }
        ans=max(ans,cnt);
        return ans;
    }
};