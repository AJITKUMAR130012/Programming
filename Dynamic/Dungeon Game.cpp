// Problem Description: https://leetcode.com/problems/dungeon-game/
T.c=o(n^2)
space complexity: o(n^2)
  
  
   int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int arr[201][201];
        int r=dungeon.size();
        int c=dungeon[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                arr[i][j]=dungeon[i][j];
            }
        }
        if(arr[r-1][c-1]>0) arr[r-1][c-1]=0;
        for(int i=r-2;i>=0;i--)
        {
            arr[i][c-1]+=arr[i+1][c-1];
            if(arr[i][c-1]>0) arr[i][c-1]=0;
        }
         for(int i=c-2;i>=0;i--)
        {
            arr[r-1][i]+=arr[r-1][i+1];
            if(arr[r-1][i]>0) arr[r-1][i]=0;
        }
        for(int i=r-2;i>=0;i--)
        {
            for(int j=c-2;j>=0;j--)
            {
                arr[i][j]+=max(arr[i+1][j],arr[i][j+1]);
                if(arr[i][j]>0) arr[i][j]=0;
            }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        return abs(arr[0][0])+1;
        
        
    }
