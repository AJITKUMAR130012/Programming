//https://practice.geeksforgeeks.org/problems/sum-of-dependencies-in-a-graph5311/1/?page=1&difficulty[]=-1&category[]=Graph&sortBy=submissions#


int sumOfDependencies(vector<int> adj[], int V) {
        // code here
        int ans=0;
        for(int i=0;i<V;i++)
        {
            ans+=adj[i].size();
        }
        return ans;
    }
