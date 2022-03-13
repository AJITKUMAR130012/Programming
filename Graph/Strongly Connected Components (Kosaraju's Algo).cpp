//https://practice.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/1/#

	void dfs(int i,vector<bool> &visited,vector<int> adj[])
	{
	    visited[i]=true;
	    for(auto c: adj[i])
	    {
	        if(!visited[c]) dfs(c,visited,adj);
	    }
	//    s.push(i);
	}
	
	void dfs1(int i,vector<bool> &visited,stack<int> &s,vector<int> adj[])
	{
	    visited[i]=true;
	    for(auto c: adj[i])
	    {
	        if(!visited[c]) dfs1(c,visited,s,adj);
	    }
	    s.push(i);
	}
	
	
	
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<int> adj[])
    {
        //code here
        vector<bool> visited(V,false);
        stack<int> s;
        int ans=0;
        for(int i=0;i<V;i++)
        {
            if(!visited[i]) dfs1(i,visited,s,adj);
        }
        vector<int> adj1[5001];
        for(int i=0;i<V;i++)
        {
            for(auto c: adj[i])
            {
                adj1[c].push_back(i);
            }
        }
        for(int i=0;i<V;i++) visited[i]=false;
        while(s.size()!=0)
        {
            int x=s.top();
            dfs(x,visited,adj1);
            while(s.size()!=0 and  visited[s.top()])
            {
                s.pop();
            }
            ans++;
            
        }
        return ans;
    }
