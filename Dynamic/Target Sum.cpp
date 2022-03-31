Problem Description: https://leetcode.com/problems/target-sum/
Time Complexity: o(n*(target+total)/2)
Space Complexity: o(n*(target+total)/2)
  
  
   int findTargetSumWays(vector<int>& nums, int target) {
        int total=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            total+=nums[i];
        }
        if(abs(target)>total) return 0;
        if((total+target)&1) return 0;
        else target=(target+total)/2;
        int t[n+1][target+1];
      
        t[0][0]=1;
        for(int i=1;i<=target;i++)
        {
            t[0][i]=0;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=target;j++)
            {
                if(j>=nums[i-1])
                {
                    t[i][j]=t[i-1][j]+t[i-1][j-nums[i-1]];
                }
                else
                {
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[n][target];
        
    }
