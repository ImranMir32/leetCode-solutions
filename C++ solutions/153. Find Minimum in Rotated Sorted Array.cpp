class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return min(nums[0],nums[1]);

        int f=0,l=nums.size()-1;
        while(1){
            int mid=(f+l)/2;
            if(f==l) return nums[l];
            if(nums[mid]>nums[mid+1]) return nums[mid+1];
            if(nums[f]>nums[l] && nums[mid]>nums[l]) f=mid;
            else l=mid;
        }
        return nums[0];
    }
};