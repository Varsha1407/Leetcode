class Solution {
public:
    bool dfs(int course,vector<vector<int>>& graph,vector<bool>& visited,vector<bool>& inPath){
        if(inPath[course]) return false;
        if(visited[course]) return true;

        visited[course]=true;
        inPath[course]=true;
        for(int next:graph[course]){
            if(!dfs(next,graph,visited,inPath)) return false;
        }
        inPath[course]=false;
        return true;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);
        vector<bool> visited(numCourses,false);
        vector<bool> inPath(numCourses,false);

        for(auto& pre : prerequisites){
            graph[pre[1]].push_back(pre[0]);
        }
        for(int i=0;i<numCourses;++i){
            if(!visited[i]){
                if(!dfs(i,graph,visited,inPath)) return false;
            }
        }
        return true;
    }
};