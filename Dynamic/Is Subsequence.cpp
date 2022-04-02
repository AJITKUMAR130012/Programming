Problem Statement: https://leetcode.com/problems/is-subsequence/
Time Complexity: o(n*m)
Space Complexity: o(n*m)
  
   bool isSubsequence(string s, string b) {
        
         int n=s.length();
        int m=b.length();
        vector<vector<int>> t(n+1,vector<int>(m+1) );
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0 or j==0)
                {
                    t[i][j]=0;
                    continue;
                }
                if(s[i-1]==b[j-1])
                {
                    t[i][j]=t[i-1][j-1]+1;
                }
                else
                {
                    t[i][j]=max(t[i][j-1],t[i-1][j]);
                }
            }
        }
         if(n==t[n][m]) return 1;
          return 0 ;
        
        
        
    }
