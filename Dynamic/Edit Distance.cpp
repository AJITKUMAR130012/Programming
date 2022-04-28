Problem Statement:https://practice.geeksforgeeks.org/problems/edit-distance3702/1/#
Time Complexity: o(n*m)
Space complexity: o(n*m)
  
  
   int editDistance(string s, string t) {
        // Code here
        int n=s.length();
        int m=t.length();
        vector<vector<int>> k(n+1,vector<int>(m+1,0));
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0 and j==0)
                {
                    k[i][j]=0;
                    continue;
                }
                if(i==0)
                {
                    k[i][j]=j;
                    continue;
                }
                if(j==0)
                {
                    k[i][j]=i;
                    continue;
                }
                if(s[i-1]==t[j-1])
                {
                    k[i][j]=k[i-1][j-1];
                }
                else
                {
                    k[i][j]=1+min(min(k[i-1][j],k[i][j-1]),k[i-1][j-1]);
                }
            }
        }
     
      return k[n][m];
     
    }
