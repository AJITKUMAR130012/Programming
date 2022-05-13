Problem Description: https://practice.geeksforgeeks.org/problems/reverse-each-word-in-a-given-string1001/1/?page=1&difficulty[]=1&category[]=Stack&sortBy=submissions
Space Complexity: o(n)
Time Complexity: o(n)
  
  string reverseWords (string s)
    {
        //code here.
        int j=0;
        stack<int> st;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                while(st.size()!=0)
                {
                    s[j]=st.top();
                    st.pop();
                    j++;
                }
                j++;
            }
            else if(i==n-1)
            {
                st.push(s[i]);
                while(st.size()!=0)
                {
                    s[j]=st.top();
                    st.pop();
                    j++;
                }
            }
            else 
            {
                st.push(s[i]);
            }
        }
       return s;
    }
