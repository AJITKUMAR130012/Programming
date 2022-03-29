//Problem Des: https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/min-cost-maze-traversal-official/ojquestion
Time complexity: o(n^2)
Space Complexity:o(n^2)
  
  
 #include <iostream>
#include <vector>

using namespace std;



int minCost(int n, int m, vector<vector<int>>& arr, vector<vector<int>>& dp ) {

  // write your code here
  dp[n-1][m-1]=arr[n-1][m-1];
  for(int i=n-2;i>=0;i--)
  {
      dp[i][m-1]=arr[i][m-1]+dp[i+1][m-1];
  }
  for(int i=m-2;i>=0;i--)
  {
      dp[n-1][i]=arr[n-1][i]+dp[n-1][i+1];
  }
  for(int i=n-2;i>=0;i--)
  {
      for(int j=m-2;j>=0;j--)
      {
          dp[i][j]=arr[i][j]+min(dp[i+1][j],dp[i][j+1]);
      }
  }
  return dp[0][0];


}

int main()  {

  int n;
  int m;

  cin >> n >> m;

  vector<vector<int>> arr(n, vector<int>(m));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  vector<vector<int>> dp(n, vector<int>(m));

  cout << minCost(n, m, arr, dp);
}
