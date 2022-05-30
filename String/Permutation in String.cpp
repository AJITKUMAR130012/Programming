Problem Description: https://leetcode.com/problems/permutation-in-string/
Time Complexity: o(n*m)  --> n is length of s1 and s2 is length of m
Space Complexity: o(n)
  
  bool checkInclusion(string s1, string s2) {
        map<char,int> t;
        for(int i=0;i<s1.length();i++)
        {
            t[s1[i]]++;
        }
        int n=s1.length();
        int m=s2.length();
        int j=0,i=0;
        while(j<m)
        {
            if(j-i+1<n)
            {
                j++;
            }
            else if(j-i+1==n)
            {
                map<char,int> mp;
                for(int k=i;k<=j;k++)
                {
                    mp[s2[k]]++;
                }
                if(mp==t) return true;
                j++;
                i++;
            }
        }
        return false;
        
    }
  
