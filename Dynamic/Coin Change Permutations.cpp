Problem Statement: https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/coin-change-permutations-official/ojquestion
Time Complexity: o(n)
Space Complexity:o(n)

  
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int target;
    cin>>target;
    vector<int> ans(target+1,0);
    ans[0]=1;
    
    for(int i=1;i<=target;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=v[j])
            {
                ans[i]+=ans[i-v[j]];
            }
        }
    }
    cout<<ans[target];
    return 0;
}
