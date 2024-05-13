class Solution {
public:
    int binary_to_decimal(string s) {
        int decimal = 0;
        for (char digit : s) {
            decimal = (decimal * 2) + (digit - '0');
        }
        return decimal;
    }

    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size();
        for (int i = 0; i < n; ++i) {
            if (grid[i][0] != 1) {
                int m = grid[i].size();
                for (int j = 0; j < m; ++j) {
                    if (grid[i][j] == 0) {
                        grid[i][j] = 1;
                    } else {
                        grid[i][j] = 0;
                    }
                }
            }
        }

        int m = grid[0].size();
        for (int i = 0; i < m; ++i) {
            int cnt_zero = 0, cnt_one = 0;
            for (int j = 0; j < n; ++j) {
                if (grid[j][i] == 0) {
                    cnt_zero++;
                } else {
                    cnt_one++;
                }
            }

            if (cnt_zero > cnt_one) {
                for (int j = 0; j < n; ++j) {
                    if (grid[j][i] == 0) {
                        grid[j][i] = 1;
                    } else {
                        grid[j][i] = 0;
                    }
                }
            }
        }

        int ans = 0;
        for (int i = 0; i < n; ++i) {
            string s = "";
            for (int j = 0; j < m; ++j) {
                s += to_string(grid[i][j]);
            }
            ans += binary_to_decimal(s);
        }
        return ans;
    }
};