Problem Description: https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/climb-stairs-with-minimum-moves-official/ojquestion
Time complexity: o(n)
Space Complexity:o(n)
  
  #include<bits/stdc++.h>
using namespace std;

int jumpT(int i, int n, vector<int>& jumps, vector<int>& dp)
{
  // write your code here
 
  for(int i=0;i<n;i++)
  {
      dp[i]=100000;
  }
      for(int i=n-1;i>=0;i--)
      {
          if(jumps[i]!=0)
          {
              int k=jumps[i];
              for(int j=1;j<=k and j+i<=n;j++)
              {
                  dp[i]=min(dp[i],1+dp[i+j]);
              }
          }
      }
      return dp[0];
  


}

int main() {

  int n;
  cin >> n;

  vector<int> jumps(n);

  for (int i = 0; i < n; i++)
  {
    cin >> jumps[i];
  }

  vector<int> dp(n + 1, 0);

  int ans = jumpT(0, n, jumps, dp);

  if (ans < 30)
    cout << ans;
  else
    cout << "null";
}
