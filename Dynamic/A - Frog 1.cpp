// Problem Description: https://atcoder.jp/contests/dp/tasks/dp_a
Time complexity: o(n)
Space complexity: o(n)
Approach: Iterative DP
  
 int frogJump(int n, vector<int> &v)
{
    // Write your code here.
    vector<int> cost(n,0);
    for(int i=n-2;i>=0;i--)
    {
        if(i==n-2)
        {
            cost[i]=abs(v[i]-v[i+1]);
        }
        else
        {
            int jump1=abs(v[i]-v[i+1])+cost[i+1];
            int jump2=abs(v[i]-v[i+2])+cost[i+2];
            cost[i]=min(jump1,jump2);
        }
    }
    return cost[0];
    
