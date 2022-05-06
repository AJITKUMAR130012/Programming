Problem Statement: https://practice.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Stack&sortBy=submissions#
Time Complexity: o(n)
Space Complexity: o(n)

  int prec(char c)
    {
        if(c=='^') return 3;
        if(c=='*' or c=='/') return 2;
        if(c=='+' or c=='-') return 1;
        return -1;
    }
    
    
    
    string infixToPostfix(string s) {
        // Your code here
        string res="";
        stack<char> a;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            char c=s[i];
          
             if((c>='a' and c<='z') or (c>='A' and c<='Z') or (c>=48 and c<=57))
            {
              //  cout<<"1"<<" ";
                res+=c;
            }
            else if(c=='(')
            {
                a.push(c);
            }
            else if(c==')')
            {
                while(a.top()!='(')
                {
                    res+=a.top();
                    a.pop();
                }
                a.pop();
            }
            else
            {
                if(a.size()==0)
                {
                    a.push(c);
                }
                else
                {
                    while(a.size()!=0 and prec(c)<=prec(a.top()) )
                    {
                        if(c=='^' and a.top()=='^') break;
                        else{
                        res+=a.top();
                        a.pop();
                        }
                    }
                    a.push(c);
                }
            }
        }
        while(a.size()!=0)
        {
            res+=a.top();
            a.pop();
        }
       return res;
    }
