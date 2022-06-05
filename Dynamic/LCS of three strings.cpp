Problem Statement: https://practice.geeksforgeeks.org/problems/lcs-of-three-strings0028/1#
Time Complexity: o(n^3)
Space Complexity: o(n^3)
  
  int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
{
    // your code here
    int t[21][21][21];
    for(int i=0;i<=n1;i++)
    {
        for(int j=0;j<=n2;j++)
        {
            for(int k=0;k<=n3;k++)
            {
                if(i==0 or j==0 or k==0)
                {
                    t[i][j][k]=0;
                    continue;
                }
                if(A[i-1]==B[j-1] and B[j-1]==C[k-1])
                {
                    t[i][j][k]=1+t[i-1][j-1][k-1];
                }
                else
                {
                    t[i][j][k]=max(t[i-1][j][k],max(t[i][j-1][k],max(t[i][j][k-1],max( t[i-1][j-1][k],max(t[i-1][j][k-1],t[i][j-1][k-1])))));
                }
            }
        }
    }
    return t[n1][n2][n3];
}
    
