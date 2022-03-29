Problem Des: https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/goldmine-official/ojquestion
Time complexity: o(n^2)
Space complexity: o(n^2)
  
  
 #include <bits/stdc++.h>

using namespace std;


int collectGold(int n, int m, vector<vector<int>>& arr, vector<vector<int>>& dp) {

  //write your code here
  for(int i=0;i<n;i++)
  {
      dp[i][m-1]=arr[i][m-1];
  }

  for(int i=m-2;i>=0;i--)
  {
      for(int j=0;j<=n-1;j++)
      {
          int x=INT_MIN;
          if(j-1>=0)
          {
              x=max(dp[j-1][i+1],x);
          }
          if(j+1<=n-1)
          {
              x=max(dp[j+1][i+1],x);
          }
          x=max(dp[j][i+1],x);
          dp[j][i]=arr[j][i]+x;
      }
  }
  int ans=INT_MIN;

  for(int i=0;i<n;i++)
  {
      ans=max(ans,dp[i][0]);
  }


  return ans;
}



int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<int>> arr(n, vector<int>(m, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  vector<vector<int>> dp(n, vector<int>(m, 0));

  cout << collectGold(n, m, arr, dp);

}
