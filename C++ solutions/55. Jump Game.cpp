// Best one
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goal=nums.size()-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(i+nums[i]>=goal) goal=i;
        }
        return goal==0 ? true : false;
    }
    
};


// first try solution
class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1) return true;
        int mx=0,ind=nums[0];
        if(ind>=nums.size()-1) return true;
        for(int i=1;i<nums.size()-1;){
           while(ind--){
            if(nums[i]>=mx){
                mx=nums[i];
            }
            if(ind!=0) mx--;
            i++;
           }
           if(mx<=0) return false;
           ind=mx;
           mx=0;
           if(i+ind>=nums.size()) return true;
        }
        return false;
    }
    
};