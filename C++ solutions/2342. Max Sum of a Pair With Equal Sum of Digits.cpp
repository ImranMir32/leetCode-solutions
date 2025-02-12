class Solution {
    public:
        int maximumSum(vector<int>& nums) {
            unordered_map<int, vector<int>> mp;
            
            for (int num : nums) {
                int sum_digits = 0, temp = num;
                while (temp) {
                    sum_digits += temp % 10;
                    temp /= 10;
                }
                mp[sum_digits].push_back(num);
            }
    
            int max_sum = -1;
    
            for (auto& [_, group] : mp) {
                if (group.size() > 1) {
                    sort(group.rbegin(), group.rend());
                    max_sum = max(max_sum, group[0] + group[1]);
                }
            }
    
            return max_sum;
        }
    };
    