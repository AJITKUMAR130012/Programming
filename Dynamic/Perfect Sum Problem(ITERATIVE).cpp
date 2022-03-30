Problem Description: https://practice.geeksforgeeks.org/problems/perfect-sum-problem5633/1#
Time Complexity: o(n*sum)
Space Complexity: o(n*sum)

	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        vector<vector<int>> t(n+1,vector<int>(sum+1));
        t[0][0]=1;
        for(int i=1;i<=sum;i++)
        {
            t[0][i]=0;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(j>=arr[i-1])
                {
                    t[i][j]=(t[i-1][j]%mod+t[i-1][j-arr[i-1]]%mod)%mod;
                }
                else
                {
                    t[i][j]=t[i-1][j]%mod;
                }
            }
        }
        
        return t[n][sum]%mod;
	}
