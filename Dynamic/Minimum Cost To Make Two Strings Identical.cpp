Problem statement: https://practice.geeksforgeeks.org/problems/minimum-cost-to-make-two-strings-identical1107/1/?page=1&difficulty[]=0&status[]=attempted&category[]=Dynamic%20Programming&sortBy=submissions
Time Complexity: o(n*m)
Space Complexity: o(n*m)
  Parent problem: Edit Distance 
	int findMinCost(string X, string Y, int costX, int costY)
	{
	    // Your code goes here
	    int n=X.length();
	    int m=Y.length();
	    vector<vector<int>> dp(n+1,vector<int>(m+1));
	    for(int i=0;i<=n;i++)
	    {
	        for(int j=0;j<=m;j++)
	        {
	            if(i==0)
	            {
	                dp[i][j]=j*costY;
	                continue;
	            }
	            if(j==0)
	            {
	                dp[i][j]=i*costX;
	                continue;
	            }
	            if(X[i-1]==Y[j-1])
	            {
	                dp[i][j]=dp[i-1][j-1];
	            }
	            else
	            {
	                if(costX+dp[i-1][j]>costY+dp[i][j-1])
	                {
	                    dp[i][j]=costY+dp[i][j-1];
	                }
	                else
	                {
	                    dp[i][j]=costX+dp[i-1][j];
	                }
	            }
	        }
	    }
	    return dp[n][m];
	}
