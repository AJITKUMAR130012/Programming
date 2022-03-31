Problem Description: https://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1
Time Complexity:o(n*w)
Space Complexity: o(n*w)
  
  int knapSack(int n, int w, int val[], int wt[])
    {
        // code here
        if(n==0 or w==0) return 0;
        vector<vector<int>> t(n+1,vector<int>(w+1,-1));
     
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=w;j++)
            {
                if(i==0 or j==0) 
                {
                    t[i][j]=0;
                    continue;
                }
                if(j>=wt[i-1])
                {
                    t[i][j]=max(val[i-1]+t[i][j-wt[i-1]],t[i-1][j]);
                }
                else
                {
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[n][w];
        
    }
