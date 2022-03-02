//https://practice.geeksforgeeks.org/problems/topological-sort/1/

	void dfs(int i,vector<int> adj[],vector<bool> &visited,stack<int> &s )
	{
	    visited[i]=true;
	    for(auto c:adj[i])
	    {
	        if(visited[c]==false)
	        {
	            dfs(c,adj,visited,s);
	        }
	    }
	    s.push(i);
	}
	
	
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	   vector<int> ans;
	   vector<bool> visited(V,false);
	   stack<int> s;
	   for(int i=0;i<V;i++)
        {
            if(!visited[i])
          dfs(i,adj,visited,s);
        }
        while(s.size()!=0)
        {
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
	    
	}
