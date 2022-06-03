Problem Description: https://practice.geeksforgeeks.org/problems/ncr1019/1#
Time Complexity: o(n*n)
Space Complexity: o(n*n)
  
   int nCr(int n, int r){
        // code here
        if(r>n) return 0;
        int mod =1e9+7;
        vector<vector<int>> t(n+1,vector<int> (n+1,-1));
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(i==0 or i==1)
                {
                    t[i][j]=1;
                    continue;
                }
                if(j==0 or j==i)
                {
                    t[i][j]=1;
                    continue;
                }
                t[i][j]=(t[i-1][j-1]%mod+t[i-1][j]%mod)%mod;
            }
            
        }
        return t[n][r];
    }
