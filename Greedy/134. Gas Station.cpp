Problem Description: https://leetcode.com/problems/gas-station/
Time Complexity: o(n)
Space Complexity: o(1)
  
   int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum=0,n=gas.size();
        for(int i=0;i<n;i++)
        {
            sum+=(gas[i]-cost[i]);
        }
        if(sum<0) return -1;
        int ans=-1;
        sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=(gas[i]-cost[i]);
            if(sum<0)
            {
                ans=-1;
                sum=0;
                continue;
            }
            if(ans==-1)
                ans=i;
        }
        return ans;
        
    }
