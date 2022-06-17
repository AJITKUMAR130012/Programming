Problem Description: https://leetcode.com/problems/valid-parenthesis-string/
Time Complexity: o(n)
Space Complexity: o(n)    // in worst case all element can be pushed into stack
  
  bool checkValidString(string s) {
        stack<char> s1,s2;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(') s1.push(i);
            if(s[i]=='*') s2.push(i);
            if(s[i]==')')
            {
                if(s1.size()!=0) s1.pop();
                else if(s2.size()!=0) s2.pop();
                else return false;
            }
        }
        if(s1.size()>s2.size()) return false;
        while(s1.size()!=0)
        {
           if(s1.top()> s2.top()) return false;
            s1.pop();
            s2.pop();
        }
        return true;
    }
