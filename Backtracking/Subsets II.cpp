ProblemDescription: https://leetcode.com/problems/subsets-ii/
Time Complexity: o(2^n)
Space Complexity: o(n)
  
  class Solution {
public:
    void fun(vector<int> nums,vector<int> op, set<vector<int>> &s)
    {
        if(nums.size()==0)
        {
            sort(op.begin(),op.end());
            s.insert(op);
            return;
        }
        vector<int> op1=op;
        vector<int> op2=op;
        op1.push_back(nums[0]);
        nums.erase(nums.begin());
        fun(nums,op1,s);
        fun(nums,op2,s);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> op;
        set<vector<int>> s;
        fun(nums,op,s);
        for( auto c: s)
            ans.push_back(c);
        return ans;
    }
};
