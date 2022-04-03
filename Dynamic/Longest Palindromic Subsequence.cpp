Problem Description:https://practice.geeksforgeeks.org/problems/longest-palindromic-subsequence-1612327878/1#
Space Complexity: o(n*n)
Time complexity:  o(n*n)

int longestPalinSubseq(string A) {
        //code here
        string B=A;
        reverse(B.begin(),B.end());
        int n=A.length();
        int m=B.length();
        vector<vector<int>> t(n+1,vector<int> (m+1));
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0 or j==0) 
                {
                    t[i][j]=0;
                    continue;
                }
                if(A[i-1]==B[j-1]) t[i][j]=1+t[i-1][j-1];
                else t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        return t[n][m];
    }
