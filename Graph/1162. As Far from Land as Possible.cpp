//https://leetcode.com/problems/as-far-from-land-as-possible/

int maxDistance(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>> q;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(grid[i][j]==1) 
               {
                   grid[i][j]=0;
                   q.push({i,j});
               }
               else if(grid[i][j]==0)
               {
                   grid[i][j]=-1;
               }
           }
       }
        while(!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            if(x-1>=0 and grid[x-1][y]==-1)
            {
                grid[x-1][y]=grid[x][y]+1;
                q.push({x-1,y});
            }
            if(x+1<n and grid[x+1][y]==-1)
            {
                grid[x+1][y]=1+grid[x][y];
                q.push({x+1,y});
            }
            if(y+1<m and grid[x][y+1]==-1)
            {
                grid[x][y+1]=1+grid[x][y];
                q.push({x,y+1});
            }
            if(y-1>=0 and grid[x][y-1]==-1)
            {
                grid[x][y-1]=1+grid[x][y];
                q.push({x,y-1});
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,*max_element(grid[i].begin(),grid[i].end()));
        }
        if(ans==0) ans=-1;
        return ans;
    }
