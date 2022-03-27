//Problem Description: https://leetcode.com/problems/min-cost-climbing-stairs/
Time complexity=o(n)
Space complexity=o(n)
Paradigm: iterative DP

int minCostClimbingStairs(vector<int>& v) {
        int n=v.size();
      vector<int> cost(n,0);
        cost[n-1]=v[n-1];
        cost[n-2]=v[n-2];
        for(int i=n-3;i>=0;i--)
        {
            cost[i]=min(v[i]+cost[i+1],v[i]+cost[i+2]);
        }
        return min(cost[0],cost[1]);
        
    }
