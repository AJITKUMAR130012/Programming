Problem Desciption: https://leetcode.com/problems/single-number/
Time Complexity: o(1)
Space Complexity: o(1)

int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans^=nums[i];
        }
        return ans;
    }
