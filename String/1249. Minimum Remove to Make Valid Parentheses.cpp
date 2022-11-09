Problem Statement: https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/
Space Complexity: o(n)   --> space taken by the stack
Time complexity : o(n)


string minRemoveToMakeValid(string s) {
        stack<pair<int,char>> st;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push({i,s[i]});
            }
            else if(st.size()==0 and s[i]==')')
            {
                st.push({i,s[i]});
            }
            else if(s[i]==')' and st.size()!=0 and st.top().second=='(')
            {
                st.pop();
            }
            else if(s[i]==')' and st.size()!=0)
            {
                st.push({i,s[i]});
            }
            
        }
        while(st.size()!=0)
        {
            int x=st.top().first;
            st.pop();
            s.erase(s.begin()+x);
        }
        return s;
        
    }
