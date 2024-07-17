class Solution {
public:
    vector<int>main;
    int len;
    Solution(vector<int>& nums) {
        main = nums;
        len = nums.size();
    }
    
    vector<int> reset() {
        return main;
    }
    
    vector<int> shuffle() {
        vector<int>arr = main;
        for(int i=0; i<len; i++){
            int ran = rand() % len;
            swap(arr[i], arr[ran]);
        }
        
        return arr;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */