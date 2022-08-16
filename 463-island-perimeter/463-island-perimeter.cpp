class Solution {
    void dfs(vector<vector<int>>& grid, int i, int j, int& peri){
        grid[i][j] = 2;
        if(i==0 || grid[i-1][j]==0) peri++;
        if(i==grid.size()-1 || grid[i+1][j]==0) peri++;
        if(j==0 || grid[i][j-1]==0) peri++;
        if(j==grid[0].size()-1 || grid[i][j+1]==0) peri++;
        
        if(i>0 && grid[i-1][j]==1) dfs(grid, i-1, j, peri);
        if(i<grid.size()-1 && grid[i+1][j]==1) dfs(grid, i+1, j, peri);
        if(j>0 && grid[i][j-1] == 1) dfs(grid, i, j-1, peri);
        if(j<grid[0].size()-1 && grid[i][j+1]==1) dfs(grid, i, j+1 ,peri);
    }
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int peri=0;
        int r = grid.size(), c = grid[0].size();
        for(int i=0; i<r; ++i){
            for(int j=0; j<c; ++j){
                if(grid[i][j]==1)
                    dfs(grid, i, j, peri);
            }
        }
        return peri;
    }
};