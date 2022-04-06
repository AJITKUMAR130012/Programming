Problem Description: https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/tiling1-official/ojquestion
Space Complexity: o(n)
Time Complexity: o(n)
  
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> t(n+1,0);
    t[1]=1;
    t[2]=2;
    for(int i=3;i<=n;i++)
    {
        t[i]=t[i-1]+t[i-2];
    }
    cout<<t[n];
    return 0;
}
