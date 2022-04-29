Problem Statement: https://practice.geeksforgeeks.org/problems/minimum-deletitions1648/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Dynamic%20Programming&sortBy=submissions#
Time complexity:o(n^2)
Space Complexity:o(n^2)
  
   int minimumNumberOfDeletions(string s) { 
        // code here
         int n=s.length();
        string t=s;
        vector<vector<int>> dp(n+1,vector<int> (n+1));
        reverse(t.begin(),t.end());
       
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0)
                {
                   dp[i][j]=j;
                   continue;
                }
                if(j==0)
                {
                    dp[i][j]=i;
                    continue;
                }
                if(s[i-1]==t[j-1])
                {
                    dp[i][j]=dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=1+min(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][n]/2;
    } 
