Problem Description: https://leetcode.com/problems/word-search/
Time Complexity: o(n^2)*(2^(n^2))
  
  class Solution {
public:
    void dfs(vector<vector<char>> &board,int i,int j,string s,int idx,bool &flag,int n,int m,vector<vector<bool>> &vis)
    {
       
        if(i<0 or j<0 or i>=n or j>=m or board[i][j]!=s[idx] or vis[i][j] ) return;
      
        
         if(idx==s.length()-1 )
        {
            flag=true;
            return;
        }
        vis[i][j]=true;
        dfs(board,i+1,j,s,idx+1,flag,n,m,vis);
        dfs(board,i,j+1,s,idx+1,flag,n,m,vis);
        dfs(board,i-1,j,s,idx+1,flag,n,m,vis);
        dfs(board,i,j-1,s,idx+1,flag,n,m,vis);
        vis[i][j]=false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
       
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                 vector<vector<bool>> vis(n,vector<bool>(m,false));
                if(!vis[i][j])
                {
                    dfs(board,i,j,word,0,flag,n,m,vis);
                    
                }
            }
        }
        if(flag) return true;
        return false;
        
    }
};
