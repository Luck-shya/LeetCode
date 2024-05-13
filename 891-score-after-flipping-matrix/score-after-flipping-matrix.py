
class Solution:
    def matrixScore(self, grid: List[List[int]]) -> int:
        m = len(grid)
        n = len(grid[0])
        ans = m

        for j in range(1, n):
            onescount = sum(grid[i][j] == grid[i][0] for i in range(m))
            ans = ans * 2 + max(onescount, m - onescount)  # Fixed the syntax error

        return ans
