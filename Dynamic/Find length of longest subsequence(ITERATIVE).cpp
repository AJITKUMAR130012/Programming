Problem Statement: https://practice.geeksforgeeks.org/problems/find-length-of-longest-subsequence4905/1/
Time Complexity: o(n*m)
Space Complexity: o(n*m)
  
  int maxSubsequenceSubstring(string X, string Y, int N, int M){
    //code
    vector<vector<int>> t(N+1,vector<int>(M+1));
    for(int i=0;i<=N;i++)
    {
        for(int j=0;j<=M;j++)
        {
            if(i==0 or j==0)
            {
                t[i][j]=0;
                continue;
            }
            if(X[i-1]==Y[j-1]) t[i][j]=1+t[i-1][j-1];
            else t[i][j]=t[i-1][j];
        }
    }
    int ans=0;
    for(int i=0;i<=M;i++)
    {
        if(t[N][i]>ans) ans=t[N][i];
    }
    return ans;
    
}
