problem Description:https://leetcode.com/problems/sudoku-solver/
Time Complexity: 9^(n*n)
Space Complexity: o(n*n)
    
 class Solution {
public:
    bool canplace(int i,int j,int num,vector<vector<char>> &board,int n)
    {
        for(int x=0;x<n;x++)
        {
            if(board[i][x]==(num+'0') or board[x][j]==(num+'0'))
            {
                return false; 
            }
        }
        int size=sqrt(n);
        int s=(i/size)*size;
        int r=(j/size)*size;
        for(int x=s;x<s+size;x++)
        {
            for(int y=r;y<r+size;y++)
            {
                if(board[x][y]==num+'0') return false;
            }
        }
        return true;
    }
    bool fun(int i,int j,vector<vector<char>> &board,int n)
    {
        if(i==n)
        {
            return true;
        }
        
        if(j==n) return fun(i+1,0,board,n);
        if(board[i][j]!='.') return fun(i,j+1,board,n);
        for(int number=1;number<=9;number++)
        {
            if(canplace(i,j,number,board,n))
            {
                board[i][j]=number+'0';
                bool x=fun(i,j+1,board,n);
                if(x) return true;
            }
        }
        board[i][j]='.';
        return false;
        
    }
    void solveSudoku(vector<vector<char>>& board) {
       
       int n=board.size();
        return fun(0,0,board,n); 
    }
};   
