Problem Statement: https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/dynamic-programming
TIme Complexity: o(n*k)
Space Complexity: o(n)
  
  #include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_path(int i,int jump,int val,vector<int> arr,vector<int> jump_array,vector<int> ans,int n)
{
    if(i==n)
    {
    
        for(int i=0;i<ans.size();i++) 
        {
            if(i!=0) cout<<" ";
            cout<<ans[i]<<" ";
            if(i!=ans.size()-1)
            cout<<"->";
        }
        cout<<".";
        cout<<endl;
        return ;
    }
    for(int x=i+1;x<=i+jump and x<=n;x++)
    {
        if(jump_array[x]==val+1)
        {
          
            vector<int> t;
            t=ans;
            t.push_back(x);
            print_path(x,arr[x],val+1,arr,jump_array,t,n);
        }
    }
}




int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int> jump(n,10000);
    jump[0]=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0 and i!=n-1)
        {
            jump[i]=INT_MAX;
            continue;
        }
        int k=v[i];
        for(int j=i+1;j<=i+k and j<n;j++)
        {
            jump[j]=min(jump[j],jump[i]+1);
        }
    }
    cout<<jump[n-1]<<endl;
    vector<int> ans;
    ans.push_back(0);
    print_path(0,v[0],0,v,jump,ans,n-1);
    return 0;
}
