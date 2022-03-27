// Problem Description: https://leetcode.com/problems/minimum-path-sum/
T.c: o(n^2)
Space complexity: o(n^2)
  
    int minPathSum(vector<vector<int>>& grid) {
        int arr[201][201];
        int r=grid.size();
        int c=grid[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                arr[i][j]=grid[i][j];
            }
        }
        for(int i=r-2;i>=0;i--)
        {
            
             arr[i][c-1]+=arr[i+1][c-1];
        }
         for(int i=c-2;i>=0;i--)
        {
            
             arr[r-1][i]+=arr[r-1][i+1];
        }
        for(int i=r-2;i>=0;i--)
        {
            for(int j=c-2;j>=0;j--)
            {
                arr[i][j]+=min(arr[i+1][j],arr[i][j+1]);
            }
        }
        
        return arr[0][0];
    }
