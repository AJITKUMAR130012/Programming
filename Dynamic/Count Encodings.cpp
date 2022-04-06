Problem Statement: https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/count-encodings-official/ojquestion
Space Complexity: o(n)
Time Complexity: o(n)


#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    vector<int> ans(n+1,0);
    ans[0]=1;
    for(int i=1;i<n;i++)
    {
        string p=s.substr(i-1,i+1);
        
        if(p[0]!='0' and p[1]!='0')
        {
            int myint=stoi(p);
        
            if(myint<=26)
            {
                ans[i]=ans[i-1]+((i-2)>=0?ans[i-2]:1);
            
            }
            else
            {
                ans[i]=ans[i-1];
            }
        }
        else if(p[0]=='0' and p[1]!='0')
        {
            ans[i]=ans[i-1];
        }
        else if(p[0]!='0' and p[1]=='0')
        {
            if(p[0]<=2)
            {
                ans[i]=((i-2)>=0?ans[i-2]:1);
            }
            else
            {
                ans[i]=0;
            }
        }
        else
        {
            ans[i]=0;
        }
        p.erase();
    }
  /*  for(int i=0;i<n;i++)cout<<ans[i]<<" ";
    cout<<endl;
    */
    
    
    cout<<ans[n-1];
    ans.clear();
    return 0;
}
