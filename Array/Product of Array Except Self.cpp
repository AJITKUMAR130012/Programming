Problem Description: https://leetcode.com/problems/product-of-array-except-self/
Time Complexity: o(n)
Space Complexity: o(n)
  
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n,1);
        int prod=1;
        for(int i=1;i<n;i++)
        {
            prod*=nums[i-1];
            left[i]=prod;
        }
        vector<int> right(n,1);
        prod=1;
        for(int i=n-2;i>=0;i--)
        {
            prod*=nums[i+1];
            right[i]=prod;
        }
        vector<int> ans(n,0);
        for(int i=0;i<n;i++)
        {
            ans[i]=left[i]*right[i];
        }
        return ans;
        
    }
