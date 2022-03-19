//https://leetcode.com/problems/rotting-oranges/submissions/

  int orangesRotting(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({{i,j},0});
                }
                else if(grid[i][j]==1) grid[i][j]=-1;
            }
        }
        int flag=1,ans=0;
        while(!q.empty())
        {
            pair<int,int> p=q.front().first;
            int z=q.front().second;
            int x=p.first;
            int y=p.second;
            cout<<"x="<<x<<"y="<<y<<endl;
            q.pop();
            if(flag!=z) {ans++; flag=z;
                        }
            if(x-1>=0 and grid[x-1][y]==-1)
            {
                grid[x-1][y]=1+grid[x][y];
                q.push({{x-1,y},(1-z)});
                
            }
            if(x+1<r and grid[x+1][y]==-1)
            {
                grid[x+1][y]=1+grid[x][y];
                q.push({{x+1,y},(1-z)});
            }
            if(y-1>=0 and grid[x][y-1]==-1)
            {
                grid[x][y-1]=1+grid[x][y];
                 q.push({{x,y-1},(1-z)});
                
            }
            if(y+1<c and grid[x][y+1]==-1)
            {
                 grid[x][y+1]=1+grid[x][y];
                q.push({{x,y+1},1-z});
            }
            
            
        }
        if(ans>0)
        ans=ans-1;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<grid[i][j]<<" ";
                if(grid[i][j]==-1) ans=-1;
            }
            cout<<endl;
        }
        return ans;
        
    }
