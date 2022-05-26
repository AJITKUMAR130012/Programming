Problem Description: https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1
Time Complexity: o(n*m)
Space Complexity: o(1)
  
  
  vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
         int top=0,down=r-1,left=0,right=c-1;
         int dir=0;
    while(top<=down && left<=right)
    {
        if(dir==0)
        {
            for(int i=left;i<=right;i++)
            {
                cout<<matrix[top][i]<<" ";
            }
            top++;
        }
        if(dir==1)
        {
            for(int i=top;i<=down;i++)
            {
                cout<<matrix[i][right]<<" ";
                
            }
            right--;
        }
        if(dir==2)
        {
            for(int i=right;i>=left;i--)
            {
                cout<<matrix[down][i]<<" ";
            }
            down--;
        }
        if(dir==3)
        {
            for(int i=down;i>=top;i--)
            {
                cout<<matrix[i][left]<<" ";
            }
            left++;
        }
        dir=(dir+1)%4;
    }
    vector<int> ans;
    return ans;
    }
