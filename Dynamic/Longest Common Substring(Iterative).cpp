Problem Description: https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1#
Time Complexity: o(n^2)
Space Complexity: o(n^2)
  
   int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        
        vector<vector<int>> t(n+1,vector<int> (m+1,-1));
   
        int ans=INT_MIN;
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                 if(i==0 or j==0)
                {
                    t[i][j]=0;
                    continue;
                }
                if(S1[i-1]==S2[j-1]){
              
                    t[i][j]=1+t[i-1][j-1];
                    ans=max(ans,t[i][j]);
                }
                else
                {
                    t[i][j]=0;
                    ans=max(ans,t[i][j]);
                 }
            }
        }
        return ans;
    }
