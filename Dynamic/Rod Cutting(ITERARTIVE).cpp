Problem Description: https://practice.geeksforgeeks.org/problems/rod-cutting0840/1
Time Complexity: o(n*n)
Space Complexity: o(n*n)



 int cutRod(int price[], int n) {
        //code here
        if(n==0) return 0;
        vector<vector<int>> t(n+1,vector<int> (n+1));
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 or j==0)
                {
                    t[i][j]=0;
                    continue;
                }
                if(j>=i)
                {
                    t[i][j]=max(price[i-1]+t[i][j-i],t[i-1][j]);
                }
                else
                {
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[n][n];

        
    }
