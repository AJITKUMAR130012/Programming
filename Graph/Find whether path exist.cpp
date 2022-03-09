//https://practice.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1/?page=1&status[]=unsolved&category[]=Graph&sortBy=submissions

vector<vector<int>> printGraph(int V, vector<int> adj[]) {
        // Code here
        vector<vector<int>> ans;
        for(int i=0;i<V;i++)
        {
            vector<int> v;
            v.push_back(i);
            for( auto c: adj[i])
            {
                v.push_back(c);
            }
            
            ans.push_back(v);
            v.clear();
        }
        return ans;
    }
