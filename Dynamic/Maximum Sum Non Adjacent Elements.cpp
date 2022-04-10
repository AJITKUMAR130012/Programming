Proble Statement: https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/maximum-sum-non-adjacent-elements-official/ojquestion
Space Complexity: o(n)
Time Complexity : o(n)
  
  #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<vector<int>> ans(2,vector<int>(n));
    ans[0][0]=v[0];
    ans[1][0]=0;
    for(int i=1;i<n;i++)
    {
        ans[0][i]=ans[1][i-1]+v[i];
        ans[1][i]=max(ans[0][i-1],ans[1][i-1]);
    }
    cout<< max(ans[0][n-1],ans[1][n-1]);
    return 0;
}
