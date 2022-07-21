Problem Description: https://leetcode.com/problems/valid-sudoku/
Time Complexity: o(n^2)
Space Complexity: 0(1)
  
  class Solution {
public:

    bool fun(char l,int i,int j,vector<vector<char>> &board,int n)
    {
        for(int p=0;p<n;p++)
        {
            if(p!=i and board[p][j]==l) return false;
            if(p!=j and board[i][p]==l) return false;
        }
            int size=sqrt(n);
        int s=(i/size)*size;
        int r=(j/size)*size;
        for(int x=s;x<s+size;x++)
        {
            for(int y=r;y<r+size;y++)
            {
                if((x!=i or y!=j) and board[x][y]==l)
                {
         
                    return false;
                }
            }
        }
        return true;  
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]!='.')
                {
                    char x=board[i][j];
             
                    if(!fun(x,i,j,board,n))
                    {
                        return false;
                    }
                }
            }
        }
      return true;
        
    }
};
