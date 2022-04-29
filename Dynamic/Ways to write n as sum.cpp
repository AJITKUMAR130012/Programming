Problem Description: https://practice.geeksforgeeks.org/problems/ways-to-write-n-as-sum-1587115621/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Dynamic%20Programming&sortBy=submissions#
Time Complexity: o(n^2)
Space Complexity: o(n^2)
  
   int countWays(int n)
    {
        // your code here
        vector<int> arr(n,0);
        for(int i=0;i<n-1;i++)
        {
            arr[i]=i+1;
        }
       
       // cout<<endl;
        vector<vector<int>> t(n,vector<int>(n+1));
        for(int i=0;i<n;i++)
        {
            t[i][0]=1;
        }
         for(int i=1;i<=n;i++)
        {
            t[0][i]=0;
        }
        
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<=n;j++)
            {
               
                if(j>=arr[i-1])
                {
                    t[i][j]=t[i-1][j]+t[i][j-arr[i-1]];
                }
                else
                {
                    t[i][j]=t[i-1][j];
                }
            }
        }
    
        return t[n-1][n];
    }
