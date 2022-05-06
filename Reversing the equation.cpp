Problem Statement: https://practice.geeksforgeeks.org/problems/reversing-the-equation2205/1/?page=2&difficulty[]=0&category[]=Stack&sortBy=submissions#
Time Complexity: o(n)
Space Complexity: o(n)   --space time taken by stack

string reverseEqn (string s)
        {
            //code here.
            stack<string> a;
           for(int i=0;i<s.length();i++)
           {
               string res="";
               if(s[i]>=48 and s[i]<=57)
               {
               
               while( s[i]>=48 and s[i]<=57)
               {
                   string p(1,s[i]);
                  res+=p;
                  i++;
               }
               a.push(res);
               i--;
               }
               else if(s[i]=='+')
               {
                   a.push("+");
               }
                else if(s[i]=='-')
               {
                   a.push("-");
               }
                else if(s[i]=='*')
               {
                   a.push("*");
               }
                else if(s[i]=='/')
               {
                   a.push("/");
               }
               else
               {
                   string p(1,s[i]);
                   res+=p;
                   a.push(res);
               }
           }
           string res="";
           while(a.size()!=0)
           {
               res+=a.top();
               a.pop();
           }
           return res;
        }
