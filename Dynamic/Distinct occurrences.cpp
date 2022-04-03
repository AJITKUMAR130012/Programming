Problem Description: https://practice.geeksforgeeks.org/problems/distinct-occurrences/1/#
Time complexity: o(n*m)
Space Complexity:o(n*m)
  
  
  int subsequenceCount(string S, string T)
    {
      //Your code here
      int n=S.length();
      int mod=1e9+7;
      int m=T.length();
      vector<vector<long long>> t(m+1,vector<long long>(n+1));
      for(int i=0;i<=n;i++ )
      {
          t[0][i]=1;
      }
      for(int i=1;i<=m;i++)
      {
          t[i][0]=0;
      }
      for(int i=1;i<=m;i++)
      {
          for(int j=1;j<=n;j++)
          {
              if(T[i-1]==S[j-1])
              {
                  t[i][j]=(t[i-1][j-1]+t[i][j-1])%mod;
              }
              else
              {
                   t[i][j]=t[i][j-1]%mod;
              }
          }
      }
   
      return t[m][n]%mod;
    }
