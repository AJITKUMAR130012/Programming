Problem statement: https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Stack&sortBy=submissions#
Time Complexity: o(n)
Space Complexity: o(n)  --> size of stack

 bool ispar(string x)
    {
        // Your code here
        if(x.length()&1) return false;
        stack<char> s;
        for(int i=0;i<x.length();i++)
        {
            if(x[i]=='(' or x[i]=='{' or x[i]=='[')
            {
                if(x[i]=='(')
                s.push(')');
                else if(x[i]=='{') s.push('}');
                else s.push(']');
             //   cout<<"1"<<endl;
            }
            else
            {
                if(s.size()==0) return false;
                if(x[i]!=s.top()) return false;
                else s.pop();
              //  cout<<"2"<<endl;
            }
        }
        if(s.size()==0)
        return true;
        return false;
    }
