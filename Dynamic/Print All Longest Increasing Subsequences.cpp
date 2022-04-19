Problem Statement: https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/dynamic-programming/lis-re-official/ojquestion
Space Complexity:
Time Complexity: 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fun(int i,int j,vector<vector<int>> &t,vector<int> &a,vector<int> &b,vector<int> ans,map<vector<int>,int> &m)
{
    if(i==0 or j==0)
    {
        if(m.find(ans)==m.end())
        {
           m[ans]++;
       
            for(int p=ans.size()-1;p>=0;p--)
            {
                cout<<ans[p];
                if(p!=0) cout<<" -> ";
            }
            cout<<endl;
        }
        return;
        
    }
    if(a[i-1]==b[j-1])
    {
        ans.push_back(a[i-1]);
        fun(i-1,j-1,t,a,b,ans,m);
    }
    else
    {
        int val=max(t[i-1][j],t[i][j-1]);
        if(val==t[i][j-1])
        {
            fun(i,j-1,t,a,b,ans,m);
        }
        if(t[i-1][j]==val)
        {
            fun(i-1,j,t,a,b,ans,m);
        }
        
    }
}






int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<int> b=v;
    sort(b.begin(),b.end());
    vector<vector<int>> t(n+1,vector<int>(n+1));
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 or j==0)
            {
                t[i][j]=0;
                continue;
            }
            if(v[i-1]==b[j-1])
            {
                t[i][j]=1+t[i-1][j-1];
            }
            else
            {
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }
   /* for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    */
    map<vector<int>,int> m;
    cout<<t[n][n]<<endl;
    vector<int> ans;
    fun(n,n,t,v,b,ans,m);
    
    
    
    
    
    
    return 0;
}
