Problem Description: https://practice.geeksforgeeks.org/problems/kth-element-in-matrix/1/?page=1&difficulty[]=1&category[]=Heap&sortBy=submissions
Time Complexity: o(n^2 logk)
Space complexity: o(k)
  
  int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  priority_queue<int> q;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          q.push(mat[i][j]);
          if(q.size()>k) q.pop();
      }
  }
  return q.top();
}
  
  
