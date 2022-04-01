Problem Statement: https://practice.geeksforgeeks.org/problems/shortest-common-supersequence0322/1/
Time Complexity: o(n*m)
Space Complexity: o(n*m)
  
  int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        //code here
        vector<vector<int>> t(m+1,vector<int> (n+1));
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 or j==0)
                {
                    t[i][j]=0;
                    continue;
                }
                if(X[i-1]==Y[j-1])
                {
                    t[i][j]=1+t[i-1][j-1];
                }
                else
                {
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        return n+m-t[m][n];
    }
