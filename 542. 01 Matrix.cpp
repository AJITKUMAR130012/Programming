//https://leetcode.com/problems/01-matrix/

 vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        queue<pair<int,int>> q;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(mat[i][j]==0)
                {
                    q.push({i,j});
                }
                else if(mat[i][j]==1) mat[i][j]=-1;
            }
        }
        while(!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            if(x-1>=0 and mat[x-1][y]==-1)
            {
                mat[x-1][y]=1+mat[x][y];
                q.push({x-1,y});
            }
            if(x+1<r and mat[x+1][y]==-1)
            {
                mat[x+1][y]=1+mat[x][y];
                q.push({x+1,y});
            }
            if(y-1>=0 and mat[x][y-1]==-1)
            {
                mat[x][y-1]=1+mat[x][y];
                q.push({x,y-1});
            }
            if(y+1<c and mat[x][y+1]==-1)
            {
                mat[x][y+1]=1+mat[x][y];
                q.push({x,y+1});
            }
        }
        return mat;
       
    }
