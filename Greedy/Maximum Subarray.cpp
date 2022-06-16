Problem Description: https://leetcode.com/problems/maximum-subarray/
Time Complexity: o(n)
Space Complexity: o(1)
  
   int maxSubArray(vector<int>& nums) {
        int sum=0,ans=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            ans=max(ans,sum);
            if(sum<0) sum=0;
        }
        
        return ans;
    }
