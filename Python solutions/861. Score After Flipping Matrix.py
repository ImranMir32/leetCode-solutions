class Solution:
    def binary_to_decimal(self, s: str) -> int:
        decimal = 0
        for digit in s:
            decimal = (decimal * 2) + int(digit)
        return decimal

    def matrixScore(self, grid: List[List[int]]) -> int:
        n = len(grid)
        for i in range(n):
            if grid[i][0] != 1:
                m = len(grid[i])
                for j in range(m):
                    if grid[i][j] == 0:
                        grid[i][j] = 1
                    else:
                        grid[i][j] = 0
        
        m = len(grid[0]) 
        for i in range(m):
            cnt_zero = cnt_one = 0
            for j in range(n):
                if grid[j][i] == 0:
                    cnt_zero += 1
                else:
                    cnt_one += 1  

            if cnt_zero > cnt_one:
                for j in range(n):
                    if grid[j][i] == 0:
                        grid[j][i] = 1
                    else:
                        grid[j][i] = 0       


        ans = 0
        for i in range(n):
            m = len(grid[i])
            s = ""
            for j in range(m):
                s += str(grid[i][j])

            ans += self.binary_to_decimal(s)
        return ans