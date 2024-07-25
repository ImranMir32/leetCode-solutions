// Given a sorted integer array nums, where the range of elements are in the inclusive range [lower, upper], 
// return its missing ranges.

// Example:

// Input: nums = [0, 1, 3, 50, 75], lower = 0 and upper = 99,
// Output: ["2", "4->49", "51->74", "76->99"]

class Solution {
public:
    string getRange(int n1, int n2) {
        if (n1 == n2) {
            return to_string(n1);
        }
        std::ostringstream oss;
        oss << n1 << "->" << n2;
        return oss.str();
    }

    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
        vector<string> res;
        int next = lower;

        for (int i = 0; i < nums.size(); i++) {
            if (lower == INT_MAX) return res;
            if (nums[i] < next) {
                continue;
            }
            if (nums[i] == next) {
                next++;
                continue;
            }
            res.push_back(getRange(next, nums[i] - 1));
            if (nums[i] == INT_MAX) return res;
            next = nums[i] + 1;
        }

        if (next <= upper) {
            res.push_back(getRange(next, upper));
        }

        return res;
    }
};
