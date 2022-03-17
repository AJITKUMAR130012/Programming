//https://leetcode.com/problems/number-of-islands/submissions/

void dfs(int i,int j,vector<vector<char>> &grid,int r,int c)
    {
        if(i<0 or j<0 or i>=r or j>=c or grid[i][j]!='1') return;
        grid[i][j]='2';
        dfs(i,j+1,grid,r,c);
        dfs(i+1,j,grid,r,c);
        dfs(i-1,j,grid,r,c);
        dfs(i,j-1,grid,r,c);
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        
        int n=grid.size();
        if(n==0) return 0;
        int m=grid[0].size();
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    dfs(i,j,grid,n,m);
                    ans++;
                }
            }
        }
        return ans;
        
    }
