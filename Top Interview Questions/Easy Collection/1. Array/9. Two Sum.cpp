// approach:1
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v=nums;

        sort(nums.begin(),nums.end());
        long long val1=0,val2=0;
        for(int i=0,j=nums.size()-1;i<j;){
            if(nums[i]+nums[j]==target){
                val1=nums[i];
                val2=nums[j];
                break;
            }
            else if(nums[i]+nums[j]>target) j--;
            else i++;
        }
        int ansi=0,ansj=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==val1) ansi=i;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==val2 && ansi!=i) ansj=i;
        }
        return {ansi,ansj};
    }
};


// Approach: 2
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>p;
        for(int i=0; i<nums.size(); i++){
            p.push_back(make_pair(nums[i], i));
        }
        
        sort(p.begin(), p.end());
        for(int i=0, j=p.size()-1; i<j;){
            if(p[i].first + p[j].first == target){
                return {p[i].second, p[j].second};
            }
            else if(p[i].first + p[j].first < target) i++;
            else j--;
        }
        return {0, 0};
    }
};