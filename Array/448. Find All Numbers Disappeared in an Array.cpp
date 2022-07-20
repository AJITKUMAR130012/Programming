Problem Description: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
Time Complexity: o(n)
Space Complexity: o(1)


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int x=abs(nums[i])-1;
            nums[x]=-abs(nums[x]);
        }
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0) ans.push_back(i+1);
        }
        return ans;
    }
};
