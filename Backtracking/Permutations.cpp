Problem Description: https://leetcode.com/problems/combination-sum/
Time Complexity: 2^(n^2)
Space Complexity: o(n)

class Solution {
public:
    
    void fun(vector<int> inp,int target,vector<vector<int>> &ans,int sum,vector<int> out)
    {
        if(sum>target) return;
        if(inp.size()==0)
        {
            if(target==sum)
            {
                ans.push_back(out);
            }
            return;
        }
        vector<int> in1=inp;
        vector<int> in2=inp;
        vector<int> op1=out;
        vector<int> op2=out;
        in2.erase(in2.begin());
        op1.push_back(in1[0]);
        fun(in1,target,ans,sum+inp[0],op1);
        fun(in2,target,ans,sum,op2);
    }
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int sum=0;
        vector<vector<int>> ans;
        vector<int> out;
        fun(candidates,target,ans,sum,out);
        
        return ans;
    }
};
