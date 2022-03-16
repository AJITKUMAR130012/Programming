//https://practice.geeksforgeeks.org/problems/bridge-edge-in-graph/1

	void bridge(int i,vector<int> adj[],int parent,vector<bool> &visited,vector<int> &low,vector<int> &dis,int &timer,vector<pair<int,int>> &ans)
	{
	    dis[i]=low[i]=timer;
	    timer++;
	    visited[i]=true;
	    for( auto c: adj[i])
	    {
	        if(visited[c]==false)
	        {
	            bridge(c,adj,i,visited,low,dis,timer,ans);
	            if(low[c]>dis[i]) ans.push_back({i,c});
	            low[i]=min(low[i],low[c]);
	            
	        }
	        else if( visited[c] and parent!=c)
	        {
	            low[i]=min(low[i],dis[c]);
	        }
	    }
	    
	}
	
	
	
    //Function to find if the given edge is a bridge in graph.
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        // Code here
        vector<bool> visited(V,false);
        vector<int> dis(V,-1);
        vector<int> low(V,-1);
        int timer=0;
        vector<pair<int,int>> p;
        for(int i=0;i<V;i++)
        {
            if(!visited[i]) bridge(i,adj,-1,visited,low,dis,timer,p);
                             
        }
    /*    for(int i=0;i<p.size();i++)
       {
           cout<<p[i].first<<" "<<p[i].second<<endl;
       }
       */
        
        
        
       for(int i=0;i<p.size();i++)
       {
           if((p[i].first==c and p[i].second==d) or (p[i].first==d and p[i].second==c)) return 1;
       }
       return 0;
    }
