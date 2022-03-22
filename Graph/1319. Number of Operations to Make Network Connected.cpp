//https://leetcode.com/problems/number-of-operations-to-make-network-connected/

 void dfs(int i,vector<int> adj[],vector<bool> &visited)
    {
        visited[i]=true;
        for(auto c: adj[i])
        {
            if(!visited[c]) dfs(c,adj,visited);
        }
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
    //    display(connections);
        vector<int> adj[100001];
        int x=connections.size();
        if(x<n-1) return -1;
        int com=0;
        for(int i=0;i<x;i++)
        {
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
        vector<bool> visited(n,false);
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                dfs(i,adj,visited);
                com++;
            }
        }
       return com-1; 
    }
