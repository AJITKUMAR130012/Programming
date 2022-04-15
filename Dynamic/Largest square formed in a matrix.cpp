Problem Statement:  https://practice.geeksforgeeks.org/problems/largest-square-formed-in-a-matrix0806/1/#
Time Complexity: o(n*m)
Space Complexity: o(n*m)
  
   int maxSquare(int n, int m, vector<vector<int>> mat){
        // code here
        int ans=0;
        vector<vector<int>> t(n+1,vector<int> (m+1));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 or j==0)
                {
                    t[i][j]=mat[i][j];
                    ans=max(ans,t[i][j]);
                }
                else if(mat[i][j]==1)
                {
                    t[i][j]=min(t[i-1][j-1],min(t[i-1][j],t[i][j-1]))+1;
                    ans=max(ans,t[i][j]);
                }
            }
        }
        return ans;
    }



