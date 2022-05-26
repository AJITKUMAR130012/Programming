Problem Description: https://leetcode.com/problems/search-a-2d-matrix/
Time Complexity: o(n+m)
Space Complexity: o(1)
  
   bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix[0].size();
        int n=matrix.size();
        int i=0,j=m-1;
        while(i<n and j>=0)
        {
            if(matrix[i][j]==target) return true;
            if(matrix[i][j]<target) i++;
            else if(matrix[i][j]>target) j--;
        }
        return false;
    }
