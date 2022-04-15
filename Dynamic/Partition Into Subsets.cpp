Problem Statement: https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/partition-into-subsets-official/ojquestion
Time Complexity: o(n*k)
Space Complexity: o(n*k)


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    vector<vector<long long>> t(n+1,vector<long long>(k+1,0));
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=k;j++)
        {
            if(i==0 or j==0)
            {
                t[i][j]=0;
            }
           else if(i<j)
           {
               t[i][j]=0;
           }
           else if(i==j) t[i][j]=1;
           else
           {
               t[i][j]=(t[i-1][j]*j) +t[i-1][j-1];
           }
        }
    }
    cout<<t[n][k]<<endl;
    return 0;
}
