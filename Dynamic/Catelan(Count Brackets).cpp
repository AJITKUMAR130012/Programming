Problem Statement: https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/dynamic-programming/count-brackets-official/ojquestion
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
    /*
    for 1, answer is 1 -> ()
    for 2, answer is 2 -> ()(), (())
    for 3, asnwer is 5 -> ()()(), () (()), (())(), (()()), ((()))
    */
    // it also follows the count valley with given upstroke and downstroke
    t[0]=1;
    t[1]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            int x=t[j]*t[i-j-1];
            t[i]+=x;
        }
    }
    cout<<t[n];
    return 0;
}
