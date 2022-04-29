Proble Description:https://practice.geeksforgeeks.org/problems/k-palindrome/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Dynamic%20Programming&sortBy=submissions
Time Complexity: o(n^2)
Space Complexity o(n^2)
  
 Approach: Longest common subsequence
 
 
bool is_k_palin(string s,int p)
{
//Your code here
string t=s;

reverse(t.begin(),t.end());
int n=s.length();
vector<vector<int>> dp(n+1,vector<int>(n+1,0));


for(int i=0;i<=n;i++)
{
    dp[0][i]=0;
    dp[i][0]=0;
}
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
     
        if(s[i-1]==t[j-1]) 
        {
            dp[i][j]=1+dp[i-1][j-1];
       
        }
        else
        {
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
   
        }
        
    }
}

int ans=2*n-2*dp[n][n];
    if(2*p>=ans) return true;
    return false;

}
