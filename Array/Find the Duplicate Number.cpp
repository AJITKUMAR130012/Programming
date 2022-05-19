Problem Description: https://leetcode.com/problems/find-the-duplicate-number/
Space Complexity: o(1)
Time Complexity: o(n)    ---> without modifying the input array


 int findDuplicate(vector<int>& nums) {
       int slow=nums[0];
        int fast=nums[0];
        slow=nums[slow];
        fast=nums[nums[fast]];
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        fast=nums[0];
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        return fast;
    }
