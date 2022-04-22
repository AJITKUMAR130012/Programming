Problem Description: https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/dynamic-programming/count-bst-official/ojquestion
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
    t[0]=1;
    t[1]=1;
    // Number of binary search tree with n node is equal to catalane number
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            int x=t[j]*t[i-j-1];
            t[i]+=x;
        }
    }
    cout<<t[n]<<" ";
    return 0;
}
