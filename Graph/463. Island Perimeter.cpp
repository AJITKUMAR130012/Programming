Problem Description: https://leetcode.com/problems/island-perimeter/
Time Complexity: o(n*m)
Space Complexity: o(n*m)
  
  class Solution {
public:
   
    int dfs(int i,int j,int n,int m,vector<vector<int>> &grid,vector<vector<bool>> &vis)
    {
        if(i<0 or j<0 or i>=n or j>=m or grid[i][j]==0) return 1;
        if(vis[i][j]) return 0;
        vis[i][j]=true;
        int u=dfs(i-1,j,n,m,grid,vis);
        int l=dfs(i,j-1,n,m,grid,vis);
        int d=dfs(i+1,j,n,m,grid,vis);
        int r=dfs(i,j+1,n,m,grid,vis);
        return u+l+d+r;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        int l,y;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    l=i;
                    y=j;
                    flag=true;
                }
            }
        }
        int ans=-1;
        if(flag)
        {
            ans=dfs(l,y,n,m,grid,vis);
        }
        return ans;
        
    }
};
