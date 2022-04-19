Problem Statement: https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/dynamic-programming/lis-official/ojquestion
Time Complexity: o(n*n)
Space Complexity: o(n*n)
  
  #include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<vector<int>> t(n+1,vector<int>(n+1));
    vector<int> b=v;
    sort(b.begin(),b.end());
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 or j==0)
            {
                t[i][j]=0;
                continue;
            }
            if(v[j-1]==b[i-1])
            {
                t[i][j]=1+t[i-1][j-1];
            }
            else
            {
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    cout<<t[n][n];
    return 0;
}
