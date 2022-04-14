Problem Statement: https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/paint-house-many-colors-official/ojquestion
Time Complexity:o(n*k*k)
Space Complexity: o(n*k)


#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int main()
{
  int n ;
  cin >> n ;
  int k ;
  cin >> k ;
  vector<vector<int>> v(n,vector<int>(k));
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<k;j++) cin>>v[i][j];
  }
  vector<vector<int>> t(k,vector<int>(n,0));
  for(int i=0;i<k;i++)
  {
      t[i][0]=v[0][i];
  }

  for(int i=1;i<n;i++)
  {
      for(int j=0;j<k;j++)
      {
          t[j][i]=INT_MAX;
          for(int p=0;p<k;p++)
          {
              if(p!=j)
              {
                t[j][i]=min(t[p][i-1],t[j][i]);
              }
          }
          t[j][i]+=v[i][j];
      }
  }
  
  int ans=INT_MAX;
  for(int i=0;i<k;i++)
  {
      ans=min(ans,t[i][n-1]);
  }
  cout<<ans;
  
  
  
  //write your code from here
  return 0;
}
