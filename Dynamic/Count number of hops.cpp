Problem Statement: https://practice.geeksforgeeks.org/problems/count-number-of-hops-1587115620/1/?page=1&difficulty[]=-1&difficulty[]=0&status[]=unsolved&category[]=Dynamic%20Programming&sortBy=submissions#
Time Complexity: o(n)
Space Complexity:o(n)
  
  long long countWays(int n)
    {
        
        // your code here
        int mod=1e9+7;
        vector<int> t(n+1,0);
        t[0]=1;
        t[1]=1;
        t[2]=2;
        t[3]=4;
        for(int i=4;i<=n;i++)
        {
            t[i]=((t[i-1]+t[i-2])%mod+t[i-3])%mod;
        }
        return t[n];
    }
