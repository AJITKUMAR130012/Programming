//https://practice.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/1#

void dfs(int i,vector<bool> &instack,stack<int> &s,vector<int> &dis,vector<int> &low,vector<int> adj[],int &timer,vector<vector<int>> &ans)
    {
            dis[i]=timer;
            low[i]=timer;
            timer++;
            s.push(i);
            instack[i]=true;
            bool flag=false;
            for( auto x: adj[i])
            {
                if(dis[x]==-1)
                {
                    dfs(x,instack,s,dis,low,adj,timer,ans);
                    low[i]=min(low[i],low[x]);
                   
                }
                if(dis[x]!=-1 and instack[x])
                {
                    low[i]=min(low[i],dis[x]);
                }
            }
            if(low[i]==dis[i])
            {
                vector<int> v;
                
                 while(!s.empty())
                {
                    int x=s.top();
                    v.push_back(x);
                    s.pop();
                    instack[x]=false;
                    if(x==i) break;
                }
                if(v.size()!=0)
                ans.push_back(v);
             }
    }	
	
	void display(vector<vector<int>> & ans)
	{
	    for( int i=0;i<ans.size();i++)
	    {
	        for(int j=0;j<ans[i].size();j++) cout<<ans[i][j]<<" ";
	        cout<<endl;
	                                         
	    }
	}
	
	
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<int> adj[])
    {
        //code here
        vector<int> dis(V,-1),low(V,-1);
        vector<bool> instack(V,false);
        stack<int> s;
        int timer=0;
        vector<vector<int>> ans;
        for(int i=0;i<V;i++)
        {
            if(dis[i]==-1)
            {
                dfs(i,instack,s,dis,low,adj,timer,ans);
            }
        }
    //    display(ans);
        return ans.size();
    
    }
