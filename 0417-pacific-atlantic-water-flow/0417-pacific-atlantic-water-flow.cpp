class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m = heights.size(),n=heights[0].size();
        vector<vector<bool>> pac(m,vector<bool>(n,false));
        vector<vector<bool>> atl(m,vector<bool>(n,false));
        vector<vector<int>> res;
        for(int i=0;i<m;++i) dfs(heights,pac,i,0) , dfs(heights,atl,i,n-1);
        for(int j=0;j<n;++j) dfs(heights,pac,0,j) , dfs(heights,atl,m-1,j);
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j)
                if(pac[i][j]&&atl[i][j]) res.push_back({i,j});
            
        }
        return res;

    }
    void dfs(vector<vector<int>>& h,vector<vector<bool>>& v , int i , int j ){
        v[i][j]=true;
        int m = h.size(),n = h[0].size();
        int dirs[4][2]={{1 ,0},{-1,0},{0,1},{0,-1}};
        for(auto&d : dirs){
            int ni=i+d[0],nj=j+d[1];
            if(ni<0||nj<0||ni>=m||nj>=n) continue;
            if(v[ni][nj]) continue;
            if(h[ni][nj]<h[i][j]) continue;
            dfs(h,v,ni,nj);
        }
    }
};