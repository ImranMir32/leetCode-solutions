class Solution {
public:
    int binary_search(vector<int>& nums, int target, int left, int right){
        if(left > right) return -1;

        int mid = left + (right - left) / 2;
        if(nums[mid] == target) return mid;
        if(nums[mid] > target) return binary_search(nums, target, left, mid - 1);
        return binary_search(nums, target, mid + 1, right);
    }

    int search(vector<int>& nums, int target) {
        int p = 0;
        int n = nums.size();
        for(int i = 1; i < n; i++){
            if(nums[i - 1] > nums[i]){
                p = i;
                break;
            }
        }

        int x = binary_search(nums, target, 0, p-1);  
        int y = binary_search(nums, target, p, n-1);  

        if(x != -1) return x;
        if(y != -1) return y;

        return -1;
    }
};
