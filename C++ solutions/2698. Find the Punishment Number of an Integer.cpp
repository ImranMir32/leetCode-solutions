class Solution {
    public:
        bool isValidPartition(string square, int index, int target) {
            if (index == square.size()) return target == 0;
            
            int value = 0;
            for (int i = index; i < square.size(); ++i) {
                value = value * 10 + (square[i] - '0');
                if (value > target) break;
                if (isValidPartition(square, i + 1, target - value)) return true;
            }
            return false;
        }
    
        int punishmentNumber(int n) {
            int sum = 0;
            for (int i = 1; i <= n; ++i) {
                int square = i * i;
                if (isValidPartition(to_string(square), 0, i)) {
                    sum += square;
                }
            }
            return sum;
        }
    };