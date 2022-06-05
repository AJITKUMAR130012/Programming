Problem Statement: https://practice.geeksforgeeks.org/problems/cutted-segments1642/1#
Time Complexity: o(n)   ---> o(4*n)
Space Complexity: o(4*n)
  
   int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        vector<int> arr;
        arr.push_back(x);
        arr.push_back(y);
        arr.push_back(z);
        vector<vector<int>> t(4,vector<int>(n+1,0));
        for(int i=0;i<=3;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 or j==0)
                {
                    t[i][j]=0;
                    continue;
                }
                if(j==arr[i-1])
                {
                    t[i][j]=max(1+t[i][j-arr[i-1]],t[i-1][j]);
                }
                else if(j>arr[i-1])
                {
                    t[i][j]=max(t[i][j-arr[i-1]]==0?0:1+t[i][j-arr[i-1]],t[i-1][j]);
                }
                else
                {
                    t[i][j]=t[i-1][j];
                }
            }
        }
    
        return t[3][n];
        
    }
