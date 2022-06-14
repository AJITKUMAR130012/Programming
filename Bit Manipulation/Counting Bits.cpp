Problem Description: https://leetcode.com/problems/counting-bits/
Time Complexity: o(n)
Space Complexity: o(n)
  
   int fun(int n)
    {
        int ans=0;
        while(n)
        {
            n=(n)&(n-1);
            ans++;
        }
        return ans;
    }
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        for(int i=0;i<=n;i++)
        {
            ans[i]=fun(i);
        }
        return ans;
    }
