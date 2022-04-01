Problem Statement: https://practice.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1
Time Complexity: o(n*m)
Space complexity: o(n*m)



 int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        vector<vector<int>> t(x+1,vector<int>(y+1));
   
        for(int i=0;i<=x;i++)
        {
            for(int j=0;j<=y;j++)
            {
                if(i==0 or j==0)
                {
                    t[i][j]=0;
                    continue;
                }
                if(s1[i-1]==s2[j-1]) t[i][j]=1+t[i-1][j-1];
                else t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        return t[x][y];
    }
