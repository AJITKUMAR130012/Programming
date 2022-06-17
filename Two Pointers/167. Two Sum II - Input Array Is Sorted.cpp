Problem Description: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
Time Complexity: o(n)
Space Complexity: o(1)


 vector<int> twoSum(vector<int>& nums, int target) {
         int l=0,r=nums.size()-1;
        vector<int> ans;
        while(l<r)
        {
            int sum=nums[l]+nums[r];
            if(sum>target) r--;
            else if(sum<target) l++;
            if(sum==target)
            {
                ans.push_back(l+1);
                ans.push_back(r+1);
                return ans;
            }
        }
        return ans;
        
    }
