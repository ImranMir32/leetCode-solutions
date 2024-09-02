class Solution {
public:
    bool binary_search(vector<int>& nums, int target, int left, int right){
        if(left > right) return false;

        int mid = left + (right - left) / 2;
        if(nums[mid] == target) return true;
        if(nums[mid] > target) return binary_search(nums, target, left, mid - 1);
        return binary_search(nums, target, mid + 1, right);
    }

    bool search(vector<int>& nums, int target) {
        int p = 0;
        int n = nums.size();
        for(int i = 1; i < n; i++){
            if(nums[i - 1] > nums[i]){
                p = i;
                break;
            }
        }

        bool x = binary_search(nums, target, 0, p-1);  
        bool y = binary_search(nums, target, p, n-1);  

        return x || y;
    }
};
