class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            priority_queue<long long, vector<long long>, greater<long>>pq;
            for(int i=0; i<nums.size(); i++) {
                if(nums[i] < k) pq.push(nums[i]);
            }
            int ans=0;
            while(!pq.empty()) {
                if(pq.size() == 1){
                    ans++;
                    pq.pop();
                    break;
                }
    
                long long mn = pq.top();
                pq.pop();
                long long mx = pq.top();
                pq.pop();
    
                long long n = (mn * 2) + mx;
                if(k > n) pq.push(n);
                ans++;
            }
            return ans;
        }
    };