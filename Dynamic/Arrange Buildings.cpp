Problem Description: https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/arrange-buildings-official/ojquestion
Space Complexity: o(n)
Time Complexity: o(n)
  
  #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n+1,0);
    vector<int> b(n+1,0);
    a[1]=1;
    b[1]=1;
    for(int i=2;i<=n;i++)
    {
        b[i]=a[i-1];
        a[i]=a[i-1]+b[i-1];
    }
    long long ans=b[n]+a[n];
    cout<<ans*ans<<endl;
    return 0;
}
