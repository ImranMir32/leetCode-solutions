class Solution:
    def largestLocal(self, grid: List[List[int]]) -> List[List[int]]:
        n = len(grid)
        ans = [[0]*(n - 2) for _ in range(n - 2)]
        for i in range(1, n - 1):
            for j in range(1, n - 1):
                ans[i - 1][j - 1] = 0
                for r in range(i - 1, i + 2):
                    for c in range (j - 1, j + 2):
                        ans[i - 1][j - 1] = max(ans[i - 1][j - 1], grid[r][c])
        return ans