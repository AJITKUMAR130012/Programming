Problem description: https://leetcode.com/problems/maximum-product-subarray/
Time complexity: o(n)
Space Complexity: o(1)
  
 int maxProduct(vector<int>& nums) {
        int curmax=1,curmin=1;
        int res=*max_element(nums.begin(),nums.end());
        for( auto n: nums)
        {   int temp=curmax*n;
            curmax=max(max(curmax*n,curmin*n),n);
            curmin=min(min(temp,curmin*n),n);
            res=max(res,curmax);
        }
        return res;
    }
