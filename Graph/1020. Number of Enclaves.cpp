//https://leetcode.com/problems/number-of-enclaves/

void dfs(int i,int j,vector<vector<int>> &g,int r,int c)
    {
        if(i<0 or i>=r or j<0 or j>=c or g[i][j]!=1) return;
        g[i][j]=2;
        dfs(i+1,j,g,r,c);
        dfs(i-1,j,g,r,c);
        dfs(i,j-1,g,r,c);
        dfs(i,j+1,g,r,c);
    }
    
    
    
    int numEnclaves(vector<vector<int>>& g) {
        int ans=0;
        int r=g.size();
        if(r==0) return 0;
        int c=g[0].size();
        for(int i=0;i<c;i++)
        {
            if(g[0][i]==1)
            {
                dfs(0,i,g,r,c);
            }
        }
        for(int i=0;i<r;i++)
        {
            if(g[i][0]==1)
            {
                dfs(i,0,g,r,c);
            }
        }
        for(int i=0;i<c;i++)
        {
            if(g[r-1][i]==1)
            {
                dfs(r-1,i,g,r,c);
            }
        }
        for(int i=0;i<r;i++)
        {
            if(g[i][c-1]==1)
            {
                dfs(i,c-1,g,r,c);
            }
        }
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(g[i][j]==1)
                {
                    ans++;
                    
                }
            }
        }
        return ans;
        
    }
