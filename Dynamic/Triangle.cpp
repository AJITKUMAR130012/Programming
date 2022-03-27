//Problem Description:https://leetcode.com/problems/triangle/
T.c=o(n^2)
Space Complexity: o(n^2)
  
  int minimumTotal(vector<vector<int>>& triangle) {
        int r=triangle.size();
        int c=triangle[r-1].size();
        int arr[201][201];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<=i;j++)
            {
                arr[i][j]=triangle[i][j];
            }
        }
        for(int i=0;i<c;i++)
        {
            arr[r-1][i]=triangle[r-1][i];
        }
        for(int i=r-2;i>=0;i--)
        {
            for(int j=0;j<=i;j++)
            {
                arr[i][j]+=min(arr[i+1][j],arr[i+1][j+1]);
            }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<r;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        return arr[0][0];
    }
