//https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1/?page=1&category[]=Graph&sortBy=submissions#

void BFS(int i,vector<bool> &visited,vector<int> &ans,vector<int> adj[])
  {
      queue<int> q;
      q.push(i);
      visited[i]=true;
      while(!q.empty())
      {
          int j=q.front();
          ans.push_back(j);
          q.pop();
          for( auto c: adj[j])
          {
              if(!visited[c])
              {
                  visited[c]=true;
                  q.push(c);
              }
          }
      }
  }
  
  
  
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool> visited(V,false);
        vector<int> ans;
        BFS(0,visited,ans,adj);
     /*   for(int i=0;i<V;i++)
        {
            if(!visited[i])
                BFS(i,visited,ans,adj);
        }
        */
        return ans;
    }
