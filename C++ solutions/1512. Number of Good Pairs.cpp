// approach :1
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]) cnt++;
            }
        }
        return cnt;
    }
};

// approach :2
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++) m[nums[i]]++;
 
        int ans=0;
        for(auto k:m){
           int cnt=k.second-1;
           ans+=(cnt*(cnt+1))/2;
        }
        return ans;
    }
};