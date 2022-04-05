Problem Description: https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions4610/0/
Space Complexity: o(n*n)
Time Complexity: o(n*n)


int minDeletions(string s, int n) { 
    //complete the function here 
    string h;
    h=s;
    reverse(h.begin(),h.end());
    vector<vector<int>> t(n+1,vector<int>(n+1));
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 or j==0)
            {
                t[i][j]=0;
                continue;
            }
            else
            {
                if(s[i-1]==h[j-1]) t[i][j]=1+t[i-1][j-1];
                else t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    return n-t[n][n];
} 


