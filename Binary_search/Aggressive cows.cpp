Problem Statement: https://www.spoj.com/problems/AGGRCOW/
Time Complexity: t*n*log(max(xi))


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int canCowPlace(vector<long long> &v, int n,long long min_dis,int cow)
{
    long long last_cow=v[0];
    int cn=1;
    for(int i=1;i<n;i++)
    {
        long long dis=v[i]-last_cow;
        if(dis >= min_dis)
        {
            last_cow=v[i];
            cn++;
            if(cn==cow) return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,cow;
    cin>>n>>cow;
    vector<long long> v(n,0);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    long long s=0,e=v[n-1]-v[0];
    long long ans=0;
    while(s<=e)
    {
        long long m=s+(e-s)/2;
        if(canCowPlace(v,n,m,cow))
        {
            ans=m;
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    cout<<ans<<endl;
    }
    return 0;


}
