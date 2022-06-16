Problem Description: https://leetcode.com/problems/jump-game-ii/
Time Complexity: o(n*n)
  space complexity: o(n)
    
     int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,INT_MAX);
        dp[0]=0;
        for(int i=0;i<n;i++)
        {
            int k=nums[i];
            for(int j=i+1;j<=i+k and j<n;j++)
            {
                dp[j]=min(dp[j],1+dp[i]);
            }
        }
        return dp[n-1];
        
    }
