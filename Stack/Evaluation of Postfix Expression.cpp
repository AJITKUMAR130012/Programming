Problem Statement: https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1/?page=1&difficulty[]=0&category[]=Stack&sortBy=submissions#
Time Complexity: o(n)  --> length of string
Space Complexity: 0(n) --> temporory stack

 int evaluatePostfix(string S)
    {
        // Your code here
        int ans=0;
        stack<int> s;
        int n=S.length();
        for(int i=0;i<n;i++)
        {
            if(S[i]>=48 and S[i]<=57)
            {
                s.push(S[i]-'0');
            }
            else{
                    int b=s.top();
                    s.pop();
                    int a=s.top();
                    s.pop();
                    if(S[i]=='+')
                    {
                        ans=(a+b);
                        s.push(ans);
                    }
                    else if(S[i]=='*')
                    {
                        ans=(a*b);
                         s.push(ans);
                    }
                    else if(S[i]=='/')
                    {
                        ans=(a/b);
                         s.push(ans);
                    }
                    else if(S[i]=='-')
                    {
                        ans=(a-b);
                         s.push(ans);
                    }
            }
        }
        return s.top();
        
    }
