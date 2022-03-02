//https://practice.geeksforgeeks.org/problems/topological-sort/1/#

	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    unordered_map<int,int> m;
	    for(int i=0;i<V;i++)
	    {
	        for(auto c: adj[i])
	        {
	            m[c]++;
	        }
	    }
/*	    for(auto c:m)
	    {
	        cout<<c.first<<" "<<c.second<<endl;
	    }
	    */
	    queue<int> q;
	    //pushing all the element which indree is zero
	    for(int i=0;i<V;i++)
	    {
	        if(m[i]==0) q.push(i);
	    }
	    vector<int> ans;
	    while(!q.empty())
	    {
	        int x=q.front();
	        ans.push_back(x);
	        q.pop();
	        for( auto c: adj[x])
	        {
	            m[c]--;
	            if(m[c]==0) q.push(c);
	        }
	    }
	    
	    
	    return ans;
	    
	}
