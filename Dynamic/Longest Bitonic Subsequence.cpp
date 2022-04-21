Problem Statement: https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/dynamic-programming/lbs-official/ojquestion
Time Complexity: o(n)
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
    int val=1;
    vector<int> ans(n);
    bool flag;
    ans[0]=1;
    for(int i=1;i<n;i++)
    {
        flag=false;
        for(int j=0;j<i;j++)
        {
            if(v[j]<v[i])
            {
                flag=true;
                ans[i]=max(ans[i],1+ans[j]);
                val=max(val,ans[i]);
            }
        }
        if(!flag)
        {
            ans[i]=1;
            val=max(ans[i],val);
        }
    }
     int val1=1;
    vector<int> ans1(n);
    
    ans1[n-1]=1;
    for(int i=n-2;i>=0;i--)
    {
        flag=false;
        for(int j=n-1;j>i;j--)
        {
            if(v[j]<v[i])
            {
                flag=true;
                ans1[i]=max(ans1[i],1+ans1[j]);
                val=max(val1,ans1[i]);
            }
        }
        if(!flag)
        {
            ans1[i]=1;
            val1=max(ans1[i],val1);
        }
    }
    int hmr=INT_MIN;
    for(int i=0;i<n;i++)
    {
        hmr=max(hmr,ans[i]+ans1[i]-1);
    }

    cout<<hmr;
    return 0;
}
