//Prolem Description: https://atcoder.jp/contests/dp/tasks/dp_b
// T.c=o(n*k)
// space complexity=o(n)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n;
  cin>>k;
  vector<int> v(n);
  vector<int> cost(n,INT_MAX);
  cost[n-1]=0;
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  for(int i=n-2;i>=0;i--)
  {
    for(int j=1;j<=k;j++)
    {
      if(i+j<=n-1)
      {
        cost[i]=min(cost[i],abs(v[i]-v[i+j])+cost[i+j]);
      }
      else
      {
          break;
      }
    }
  }
  cout<<cost[0];
  return 0;
}
