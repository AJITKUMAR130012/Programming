//https://leetcode.com/problems/number-of-provinces/


  void dfs(int i,vector<bool> &visited,vector<int> adj[])
    {
        visited[i]=true;
        for( auto c: adj[i])
        {
            if(! visited[c]) dfs(c,visited,adj);
        }
    }
    
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int> adj[201];
        int n=isConnected.size();
        int m=isConnected[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(isConnected[i][j])
                adj[i].push_back(j);
            }
        }
        int ans=0;
        vector<bool> visited(n,false);
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                dfs(i,visited,adj);
                ans++;
            }
        }
        return ans;
    }
