Problem Description: https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1/?page=1&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&status[]=unsolved&category[]=Dynamic%20Programming&sortBy=submissions
Time Complexity: o(n)
Space Complexity: o(n)
  
  int FindMaxSum(int arr[], int n)
    {
        // Your code here
        int mod=1e9+7;
        vector<vector<long long>> t(2,vector<long long>(n+1));
        t[0][0]=arr[0];
        t[1][0]=0;
        for(int i=1;i<=n;i++)
        {
            t[0][i]=(t[1][i-1]%mod+ll(arr[i])%mod)%mod;
            t[1][i]=max(t[0][i-1],t[1][i-1]);
        }
     
        return max(t[0][n-1],t[1][n-1]);
    
    }
