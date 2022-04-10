Problem Statement: https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/count-a+b+c+subsequences-official/ojquestion
Space Complexity:o(n)
Time complexity: o(n)
  
  
  #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    vector<vector<int>> ans(3,vector<int>(n+1,0));
    for(int i=0;i<=n;i++)
    {
        if(i==0)
        {
            ans[0][i]=0;
            ans[1][i]=0;
            ans[2][i]=0;
            continue;
        }
        if(s[i-1]=='a')
        {
            
            ans[0][i]=2*ans[0][i-1]+1;
            ans[1][i]=ans[1][i-1];
            ans[2][i]=ans[2][i-1];
        }
        if(s[i-1]=='b')
        {
            ans[0][i]=ans[0][i-1];
            ans[1][i]=2*ans[1][i-1]+ans[0][i-1];
            ans[2][i]=ans[2][i-1];
        }
        if(s[i-1]=='c')
        {
            ans[0][i]=ans[0][i-1];
            ans[1][i]=ans[1][i-1];
            ans[2][i]=2*ans[2][i-1]+ans[1][i-1];
        }
    }
   /* for(int i=0;i<3;i++)
    {
        for(int j=0;j<=n;j++)
    }
    */
    cout<< ans[2][n];
    return 0;
}
