Problem Description: https://practice.geeksforgeeks.org/problems/path-in-matrix3805/1#
Time Complexity: o(n^2)
Space Complexity: o(n^2)
  
  	 int maximumPath(int n, vector<vector<int>> m)
    {
        // code here
        vector<vector<int>> t(n+1,vector<int>(n+1,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0)
                {
                    t[i][j]=m[i][j];
                    continue;
                }
                if(j==0)
                {
                    t[i][j]=m[i][j]+max(t[i-1][j],t[i-1][j+1]);
                }
                else if(j==n-1)
                {
                    t[i][j]=m[i][j]+max(t[i-1][j],t[i-1][j-1]);
                }
                else
                {
                    int p=max(t[i-1][j],max(t[i-1][j-1],t[i-1][j+1]));
                    t[i][j]=p+m[i][j];
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(t[n-1][i],ans);
        }
        return ans;
    }
