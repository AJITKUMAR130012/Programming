Problem Description: https://leetcode.com/problems/house-robber-ii/
Time Complexity: o(n)
Space Complexity: (n)

class Solution {
public:
    int fun1(vector<int> &nums)
    {
        int n=nums.size();
        vector<vector<int>> t(2,vector<int>(n,0));
        t[0][0]=nums[0];
        t[1][0]=0;
        for(int i=1;i<n-1;i++)
        {
            t[0][i]=t[1][i-1]+nums[i];
            t[1][i]=max(t[0][i-1],t[1][i-1]);
        }
        return max(t[0][n-2],t[1][n-2]);
    }
    int fun2(vector<int> &nums)
    {
        int n=nums.size();
        vector<vector<int>> t(2,vector<int>(n,0));
        t[0][0]=nums[1];
        t[1][0]=0;
        for(int i=2;i<n;i++)
        {
            t[0][i-1]=t[1][i-2]+nums[i];
            t[1][i-1]=max(t[0][i-2],t[1][i-2]);
        }
        return max(t[0][n-2],t[1][n-2]);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];
        return max(fun1(nums),fun2(nums));
        
    }
};
