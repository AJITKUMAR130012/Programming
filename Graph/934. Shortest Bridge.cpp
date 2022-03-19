//https://leetcode.com/problems/shortest-bridge/submissions/

 void dfs(int i,int j,int r,int c,vector<vector<int>> &grid,queue<pair<pair<int,int>,int>> &q)
    {
        if(i<0 or i>=r or j<0 or j>=c or grid[i][j]!=1) return;
        q.push({{i,j},0});
        grid[i][j]=2;
        dfs(i+1,j,r,c,grid,q);
        dfs(i-1,j,r,c,grid,q);
        dfs(i,j+1,r,c,grid,q);
        dfs(i,j-1,r,c,grid,q);
    }
    int shortestBridge(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>> q;
        int r=grid.size();
        int c=grid[0].size();
        bool flag=false;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                {
                    dfs(i,j,r,c,grid,q);
                    flag=true;
                    break;
                }
            }
            if(flag) break;
        }
        while(!q.empty())
        {
            pair<int,int> p=q.front().first;
            int x=p.first;
            int y=p.second;
            int z=q.front().second;
            q.pop();
            if(x-1>=0 and grid[x-1][y]==1) return z;
            else if(x-1>=0 and grid[x-1][y]==0)
            {
                grid[x-1][y]=2;
                q.push({{x-1,y},z+1});
            }
             if(y-1>=0 and grid[x][y-1]==1) return z;
            else if(y-1>=0 and grid[x][y-1]==0)
            {
                grid[x][y-1]=2;
                q.push({{x,y-1},z+1});
            }
             if(x+1<r and grid[x+1][y]==1) return z;
            else if(x+1<r and grid[x+1][y]==0)
            {
                grid[x+1][y]=2;
                q.push({{x+1,y},z+1});
            }
             if(y+1<c and grid[x][y+1]==1) return z;
            else if(y+1<c and grid[x][y+1]==0)
            {
                grid[x][y+1]=2;
                q.push({{x,y+1},z+1});
            }
        }
        return -1;
        
    }
