//https://leetcode.com/problems/course-schedule/

 bool dfs(int i,vector<int> adj[],vector<bool> &visited,vector<bool> &dfsvisited)
    {
        visited[i]=true;
        dfsvisited[i]=true;
        for( auto c: adj[i])
        {
            if(!visited[c])
            {
                if(dfs(c,adj,visited,dfsvisited)) return true;
                dfsvisited[c]=false;
            }
            else if(dfsvisited[c]) return true;
        }
        dfsvisited[i]=false;
        return false;
    }
    
    
    
    bool canFinish(int v, vector<vector<int>>& p) {
        vector<int> adj[100001];
        vector<bool> visited(v,false);
        vector<bool> dfsvisited(v,false);
        for(int i=0;i<p.size();i++)
        {
            adj[p[i][1]].push_back(p[i][0]);
        }
        for(int i=0;i<v;i++)
        {
            if(!visited[i]) if(dfs(i,adj,visited,dfsvisited)) return false;
        }
        return true;
    }
