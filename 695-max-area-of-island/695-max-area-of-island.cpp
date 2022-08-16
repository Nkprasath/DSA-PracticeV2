class Solution {
    int count_island(vector<vector<int>>& grid, int i, int j, int& count){
        int m = grid.size();
        int n = grid[0].size();
        if(i<0 || j<0 || i>=m || j>=n) return 0;
        if(grid[i][j]==0) return 0;
        
        grid[i][j]=0;
        
        if(count_island(grid, i-1, j, count)) count++;
        if(count_island(grid, i+1, j, count)) count++;
        if(count_island(grid, i, j-1, count)) count++;
        if(count_island(grid, i, j+1, count)) count++;
        
        return count;
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int maxi=0;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int count = 1;
                if(grid[i][j]==1) {
                    count_island(grid, i, j, count);
                    maxi = max(maxi, count);
                }
            }
        }
        return maxi;
    }
};