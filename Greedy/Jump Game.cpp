Problem Description: https://leetcode.com/problems/jump-game/
Time Complexity: o(n)
Space Complexity: o(1)
  
   bool canJump(vector<int>& nums) {
        int reachable=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(i>reachable) return false;
            reachable=max(reachable,i+nums[i]);
        }
        return true;
    }
