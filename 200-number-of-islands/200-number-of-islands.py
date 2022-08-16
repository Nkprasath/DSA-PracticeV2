def dfs(grid, r, c):
    if(r<0 or c<0 or r>=len(grid) or c>=len(grid[0])): return
    if(grid[r][c]=="2" or grid[r][c]=="0"): return 
    grid[r][c] = "2"
        
    dfs(grid, r+1, c)
    dfs(grid, r-1, c)
    dfs(grid, r, c-1)
    dfs(grid, r, c+1)
class Solution:        
    def numIslands(self, grid: List[List[str]]) -> int:
        row = len(grid)
        col = len(grid[0])
        count = 0
        
        for r in range(row):
            for c in range(col):
                if grid[r][c] == "1":
                    dfs(grid, r, c)
                    count+=1
        return count