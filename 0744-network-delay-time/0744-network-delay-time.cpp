class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<int>> dist(n+1,vector<int>(1,1e9));
        dist[k][0]=0;
        for(int i =1;i<n;++i){
        for(auto&t : times){
            int u = t[0],v = t[1],w=t[2];
            if(dist[u][0]+w<dist[v][0]) dist[v][0]=dist[u][0]+w;
        }
        }
        int ans=0;
        for(int i=1;i<=n;++i){
            if(dist[i][0]==1e9) return -1;
            ans=max(ans,dist[i][0]);
        }
        return ans;
    }
};