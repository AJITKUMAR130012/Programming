Problem Description: https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/dynamic-programming/circle-and-chords-official/ojquestion
Time Complexity: o(n)
Space Complexity: o(n)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long catelan(int n)
{
    vector<long long> t(n+1,0);
    t[0]=1;
    t[1]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            long long x=t[j]*t[i-j-1];
            t[i]+=x;
        }
    }
    return t[n];
}
// if input is n then we have total 2*n point on the circle
// need to count how many non-intersecting chord can be drawn
// it is eqaul to the catelan number

int main()
{
    int n;
    cin>>n;
    cout<<catelan(n);
    return 0;
}
