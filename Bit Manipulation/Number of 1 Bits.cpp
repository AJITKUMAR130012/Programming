Problem Description: https://leetcode.com/problems/number-of-1-bits/
Time Complexity: o(1)
Space Complexity: o(1)
  
  int hammingWeight(uint32_t n) {
        int ans=0;
        while(n)
        {
       
            n=(n)&(n-1);
            ans++;
        }
        return ans;
        
    }
