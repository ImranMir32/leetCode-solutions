class Solution {
public:
    static bool customCompare(const string &a, const string &b) {
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> numsAsStrings;
        for (int num : nums) {
            numsAsStrings.push_back(to_string(num));
        }
        sort(numsAsStrings.begin(), numsAsStrings.end(), customCompare);
        if (numsAsStrings[0] == "0") {
            return "0"; 
        }

        string result = "";
        for (const string &num : numsAsStrings) {
            result += num;
        }

        return result;
    }
};