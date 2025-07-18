class Solution {
public:
    void dfs(vector<vector<int>>&grid,int i , int j){
        int m = grid.size(),n = grid[0].size();
        if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == 0) return;
        grid[i][j]=0;
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1); 
        dfs(grid,i,j-1); 
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size(),n = grid[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            if(grid[i][0]==1) dfs(grid,i,0);
            if(grid[i][n-1]==1) dfs(grid,i,n-1);
        }
        for(int i=0;i<n;i++){
            if(grid[0][i]==1) dfs(grid,0,i);
            if(grid[m-1][i]==1) dfs(grid,m-1,i);
        }
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(grid[i][j]==1) count++;
            }
        }
        return count;
    }
};