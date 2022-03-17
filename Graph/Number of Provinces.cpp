//https://practice.geeksforgeeks.org/problems/number-of-provinces/1/#

 void dfs(int i,vector<bool> &vi,vector<int> adj[])
  {
     vi[i]=true;
     for(auto c:adj[i])
     {
         if(!vi[c]) dfs(c,vi,adj);
     }
  }
  
  
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<bool> vi(V,false);
        int cmpnt=0;
        vector<int> adj1[1000];
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
                if(adj[i][j]) adj1[i].push_back(j);
            }
        }
        for(int i=0;i<V;i++)
        {
            if(!vi[i]) 
            {
                dfs(i,vi,adj1);
                cmpnt++;
            }
        }
        return cmpnt;
    }
