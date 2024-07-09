//approach : 1
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]) return true;
        }
        return false;
    }
};

//approach : 2
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        set<int>st;
        for(int i=0;i<n;i++) st.insert(nums[i]);
        return (n!=st.size()) ? true : false;
    }
};

// Approach : 3
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>ust;
        for(int i=0;i<nums.size();i++){
            if (ust.find(nums[i]) != ust.end()) return true;
            ust.insert(nums[i]);
        }
        return false;
    }
};

// Approach : 4
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        map<int,int>m;
        for(int i=0;i<n;i++) m[nums[i]]++;
        return (n!=m.size()) ? true : false;
    }
};