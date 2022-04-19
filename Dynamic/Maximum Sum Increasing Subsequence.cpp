Problem Statement: https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/dynamic-programming/msis-official/ojquestion
Time Complexity : o(n)
Space Complexity: o(n)


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<int> b=v;
    sort(b.begin(),b.end());
    
    vector<vector<int>> t(n+1,vector<int> (n+1));
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 or j==0)
            {
                t[i][j]=0;
                continue;
            }
            if(b[i-1]==v[j-1])
            {
                t[i][j]=b[i-1]+t[i-1][j-1];
            }
            else
            {
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }
   /* for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    */
    cout<<t[n][n];
}
