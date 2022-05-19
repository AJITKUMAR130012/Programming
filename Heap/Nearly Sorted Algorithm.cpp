Problem Statement: https://practice.geeksforgeeks.org/problems/nearly-sorted-algorithm/0
Time Complexity: o(nlogn)
Space Complexity: o(n)
  
  #include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
//    for(int i=0;i<n;i++) cout<<v[i]<<" ";
//    cout<<endl;
    vector<int> ans;
    priority_queue<int,vector<int>,greater<int>> q;
    for(int i=0;i<n;i++)
    {
        q.push(v[i]);
        if(q.size()>k)
        {
            ans.push_back(q.top());
            q.pop();
        }
    }
    while(q.size()!=0)
    {
        ans.push_back(q.top());
        q.pop();
    }
   for(int i=0;i<n;i++)
   {
       cout<<ans[i]<<" ";
   }
   cout<<endl;
   ans.clear();
   v.clear();
//   q.clear();
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
