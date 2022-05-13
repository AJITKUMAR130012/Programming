Problem Description: https://practice.geeksforgeeks.org/problems/904237fa926d79126d42c437802b04287ea9d1c8/1/?page=1&difficulty[]=1&status[]=unsolved&category[]=Stack&sortBy=submissions#
Time Complexity: o(n)
Space Complexity: o(n)
  
  int minLength(string s, int n) {
        string ans="";
        stack<char> st;
        for(int i=0;i<n;i++)
        {
            int k=s[i]-48;
            if(st.size()==0)
            {
                st.push(s[i]);
            }
            else if(s[i]=='0' and st.top()=='9')
            {
                st.pop();
            }
            else if(s[i]=='9' and st.top()=='0')
            {
                st.pop();
            }
            else if(k&1 and k==(st.top()-48)-1)
            {
                st.pop();
            }
            else if(!(k&1) and k==((st.top()-48)+1))
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
    
      
       
        return st.size();
        // code here
    } 
