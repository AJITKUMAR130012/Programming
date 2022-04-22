Problem Description: https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/dynamic-programming/count-valleys-mountains-official/ojquestion
Time Complexity: o(n)
Space Complexity: o(n)
 
 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> t(n+1,0);
    // if n=0 then we have 1 ways to create valleys
    t[0]=1;
    
    //    if n==1 then 1 way to make valleys   /\
    
    t[1]=1;
    // it is also following the catelan number 
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            int x=t[j]*t[i-j-1];
            t[i]+=x;
        }
    }
    cout<<t[n];
    return 0;
}
