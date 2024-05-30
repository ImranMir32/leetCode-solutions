class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;

        for(int i=0;i<nums.size();i++){
            q.push(nums[i]);
        }
        
        int ans = 0;
        while(k){
            ans = q.top();
            q.pop();
            k -= 1;
        }

        return ans;

    }
};