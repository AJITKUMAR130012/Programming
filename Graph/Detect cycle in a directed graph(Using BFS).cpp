//https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1/?page=1&category[]=Graph&sortBy=submissions#


 bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int> indegree(V+1,0);
        for(int i=0;i<V;i++)
        {
            for( auto c: adj[i])
            {
                indegree[c]++;
            }
        }
        queue<int> q;
        for(int i=0;i<V;i++)
        {
            if(indegree[i]==0) q.push(i);
        }
        int cn=0;
        while(!q.empty())
        {
            int x=q.front();
            cn++;
      //      cout<<x<<" ";
            q.pop();
            for( auto c: adj[x])
            {
                indegree[c]--;
                if(indegree[c]==0) q.push(c);
            }
        }
        if(cn==V) return false;
        return true;
    }
