Problem Description: https://leetcode.com/problems/palindromic-substrings/
Time Complexity: o(n^2)
Space Complexity: o(1)
  
  class Solution {
public:
    int countSubstrings(string s) {
        int ans=0,n=s.length();
        for(int i=0;i<n;i++)
        {
            int l=i,r=i;
            while(l>=0 and r<n and s[l]==s[r])
            {
                ans++;
                l--;r++;
            }
        }
         for(int i=0;i<n;i++)
        {
            int l=i,r=i+1;
            while(l>=0 and r<n and s[l]==s[r])
            {
                ans++;
                l--;r++;
            }
        }
        return ans;
        
    }
};
