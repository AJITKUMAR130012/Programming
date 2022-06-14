Problem Description: https://leetcode.com/problems/missing-number/
Time Complexity: o(n)
Space Complexity: o(1)
  
   int missingNumber(vector<int>& nums) {
       int ans=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            ans=ans^nums[i];
        }
        for(int i=0;i<=n;i++)
        {
            ans=ans^i;
        }
      
        return ans;
        
    }
