Problem Description: https://leetcode.com/problems/longest-increasing-path-in-a-matrix/
Time Complexity: o(n*m(n+m))
Space Complexity: o(n*m)
  
 class Solution {
public:
    int dfs(int i,int j,int p,vector<vector<int>> &mat,int n,int m,vector<vector<int>> &t)
    {
        if(i<0 or j<0 or i>=n or j>=m or p>=mat[i][j]) return 0;
        if(t[i][j]!=-1) return t[i][j];
        int l=dfs(i,j-1,mat[i][j],mat,n,m,t);
        int r=dfs(i,j+1,mat[i][j],mat,n,m,t);
        int u=dfs(i-1,j,mat[i][j],mat,n,m,t);
        int v=dfs(i+1,j,mat[i][j],mat,n,m,t);
        int x=max(l,r);
        int y=max(u,v);
        return t[i][j]=1+max(x,y);
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int ans=INT_MIN;
        vector<vector<int>> t(n,vector<int>(m,-1));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(t[i][j]==-1)
                {
                t[i][j]=dfs(i,j,INT_MIN,matrix,n,m,t);
                ans=max(ans,t[i][j]);
                }
            }
        }
        return ans;
    }
};
