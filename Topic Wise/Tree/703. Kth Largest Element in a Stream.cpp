class KthLargest {
public:
    priority_queue<int, vector<int>,greater<int>> minHeap;
    int len = 0;
    KthLargest(int k, vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            minHeap.push(nums[i]);
        }
        while(minHeap.size()>k) minHeap.pop(); 
        len = k;
    }
    
    int add(int val) {
        if(minHeap.size()<len){
           minHeap.push(val);
        }
        else if(minHeap.top()<val){
            minHeap.pop();
            minHeap.push(val);
        }

        return minHeap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */