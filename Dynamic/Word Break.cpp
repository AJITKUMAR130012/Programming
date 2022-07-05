Problem Description: https://leetcode.com/problems/word-break/
Time Complexity: o(n*m)
Space Complexity: o(n)
  
  
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.length();
        vector<bool> t(n+1,false);
        t[n]=true;
        for(int i=n-1;i>=0;i--)
        {
            for( auto c: wordDict)
            {
                int l=c.length();
               
                if(i+l<=n and c==s.substr(i,l))
                {
                    t[i]=t[i+l];
                  
                }
                if(t[i]) break;
            }
        }
      
        return t[0];
        
        
    }
