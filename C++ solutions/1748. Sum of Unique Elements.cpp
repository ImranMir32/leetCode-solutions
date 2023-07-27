// approach :1
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int>m;
        int ans=0;
        for(int i=0;i<nums.size();i++) m[nums[i]]++;
        for(auto k:m) if(k.second==1) ans+=k.first;
        return ans;
    }
};

// approach :2
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int>m;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            if(m[nums[i]]>1){
                if(m[nums[i]]==2) ans-=nums[i];
            }
            else ans+=nums[i];
        }
        return ans;
    }
};