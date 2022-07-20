Problem Description: https://leetcode.com/problems/find-all-duplicates-in-an-array/
Time Complexity: o(n)
Space Complexity: o(1)
  
  class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int x=abs(nums[i])-1;
            if(nums[x]<0) ans.push_back(x+1);
            nums[x]=-nums[x];
        }
        return ans;
    }
};
