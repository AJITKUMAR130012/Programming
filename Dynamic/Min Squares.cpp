Problem Description: https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/dynamic-programming/min-squares-official/ojquestion
Time Complexity: o(n*sum)
Space Complexity: o(n*sum)
  
  
  #include<iostream>
using namespace std;
#include<bits/stdc++.h>
void display(vector<int> &v)
{
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}
int main()
{
    int sum;
    cin>>sum;
    vector<int> v;
    int val=1,cnt=1;
    while(cnt<=sum)
    {
        v.push_back(cnt);
        val++;
        cnt=val*val;
    }
    int n=v.size();
  //  display(v);

    vector<vector<int>> t(n+1,vector<int> (sum+1));
    
    for(int x=1;x<=sum;x++)
    {
        t[0][x]=INT_MAX;
    }
    for(int i=0;i<=n;i++) t[i][0]=0;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(j>=v[i-1]) t[i][j]=min(t[i-1][j],t[i][j-v[i-1]]+1);
            else t[i][j]=t[i-1][j];
        }
    }
  //  for(int i=)
    cout<<t[n][sum];
    
    return 0;
}
