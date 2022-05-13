Problem Description: https://practice.geeksforgeeks.org/problems/valid-expression1025/1/?page=1&difficulty[]=1&category[]=Stack&sortBy=submissions
Time Complexity:o(n)
Space Complexity: o(n) --> space taken by stack to in insert opening bracket

bool valid(string s)
{
    // code here
    stack<char> st;
    int n=s.length();
    if(n&1) return false;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(' or s[i]=='{' or s[i]=='[')
        {
            st.push(s[i]);
      
        }
        else
        {
            if(st.size()==0) return false;
            if(s[i]==')' and st.top()=='(')
            {
          //      cout<<"2"<<" ";
                st.pop();
                continue;
                
            }
            else if(s[i]==')' and  st.top()!='(')
            {
          //      cout<<"3"<<" ";
                
                return false;
            }
            if(s[i]=='}' and st.top()=='{')
            {
          //      cout<<"4"<<" ";
                st.pop();
            }
            else if(s[i]=='}' and st.top()!='{')
            {
            //    cout<<"5"<<" ";
                return false;
            }
            if(s[i]==']' and st.top()=='[')
            {
           //     cout<<"6"<<" ";
                st.pop();
            }
            else if(s[i]==']' and st.top()!='[')
            {
           //     cout<<"7"<<" ";
                return false;
            }
            
        }
    }
    if(st.size()!=0)
    {
    //    cout<<"8"<<" ";
        return false;
    }
  //  cout<<"9"<<" ";
    return true;
}


