Problem Statement: https://practice.geeksforgeeks.org/problems/k-palindrome/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Dynamic%20Programming&sortBy=submissions#
Time Complexity: o(n^2)
Space COmplexity: o(n^2)
  
 Approach: Edit distance
 
 bool is_k_palin(string s,int p)
{
//Your code here
string t=s;

reverse(t.begin(),t.end());
int n=s.length();
vector<vector<int>> dp(n+1,vector<int>(n+1,0));
vector<vector<int>> k(n+1,vector<int>(n+1,0));

for(int i=0;i<=n;i++)
{
    dp[0][i]=i;
    dp[i][0]=i;
}
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
     
        if(s[i-1]==t[j-1]) 
        {
            dp[i][j]=dp[i-1][j-1];
       
        }
        else
        {
            dp[i][j]=1+min(dp[i-1][j],dp[i][j-1]);
       
        }
        
    }
}
//cout<<dp[n][n]<<endl;
    if(2*p>=dp[n][n]) return true;
    return false;

}
