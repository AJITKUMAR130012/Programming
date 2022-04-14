Problem Statement:https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/paint-house-official/ojquestion
Time Complexity: o(n)
Space Complexity: o(*n)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int>(3));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++) cin>>v[i][j];
    }
    vector<vector<int>> t(3,vector<int>(n,0));
 
    t[0][0]=v[0][0];
    t[1][0]=v[0][1];
    t[2][0]=v[0][2];
    for(int i=1;i<n;i++)
    {
        t[0][i]=min(t[1][i-1],t[2][i-1])+v[i][0];
        t[1][i]=min(t[0][i-1],t[2][i-1])+v[i][1];
        t[2][i]=min(t[1][i-1],t[0][i-1])+v[i][2];
    }
    cout<<min(min(t[0][n-1],t[1][n-1]),t[2][n-1]);
    
    return 0;
}
