Problem Description: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
Time Complexity: o(n)
Space Complexity: o(1)
  
  class Solution {
public:
    int strStr(string s1, string s2) {
       int n=s1.length();
        int m=s2.length();
        if(m>n) return -1;
        if(m==n and s1==s2) return 0;
        vector<int> pos;
        for(int i=0;i<n;i++)
        {
            if(s2[0]==s1[i] and i+m<=n)
            {
                pos.push_back(i);
            }
        }
        for(int i=0;i<pos.size();i++)
        {
            int l=pos[i];
            int j;
            for( j=0;j<m;j++)
            {
                if(s2[j]!=s1[l+j])
                {
                    break;
                }
            }
            if(j==m) return l;
        }
        return -1;
   
    }
};
