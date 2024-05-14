class Solution:
    def getMaximumGold(self, grid: List[List[int]]) -> int:
        def find_max(i, j, grid, m, n, ans, vp):
            if i < 0 or i >= n or j < 0 or j >= m or grid[i][j] == 0:
                return
            else:
                find = grid[i][j]
                vp[0] += find
                grid[i][j] = 0
                ans[0] = max(vp[0], ans[0])

                find_max(i + 1, j, grid, m, n, ans, vp)
                find_max(i - 1, j, grid, m, n, ans, vp)
                find_max(i, j + 1, grid, m, n, ans, vp)
                find_max(i, j - 1, grid, m, n, ans, vp)
                
                vp[0] -= find
                grid[i][j] = find
        
        ans = [0]
        vp = [0]
        n, m = len(grid), len(grid[0])
        for i in range(n):
            for j in range(m):
                if grid[i][j] != 0:
                    find_max(i, j, grid, m, n, ans, vp)

        return ans[0]
