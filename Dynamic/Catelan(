Problem Statement: https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/dynamic-programming/number-of-ways-of-triangulation-official/ojquestion
Space Complexity: o(n)
time Complexity: o(n)


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// number of triange for n=2 is 1
// mumber of triangle for n=3 is 1
// so answer would be t[n-2]
int catelan(int n)
{
    vector<int> t(n+1,0);
    t[0]=1;
    t[1]=1;
   
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            int x=t[j]*t[i-j-1];
            t[i]+=x;
        }
    }
    return t[n-2];
}


int main()
{
    int n;
    cin>>n;
    cout<<catelan(n);
    return 0;
}
