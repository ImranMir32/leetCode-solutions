class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;

        for(int i=0;i<nums.size() ; i++){
            if(target > nums[i]) first = i;
            else if (target == nums[i]) last = i;
        }

        if(last == -1) return {-1, -1};

        return {first + 1, last};
    }
};