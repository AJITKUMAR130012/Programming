Problem Statement: https://practice.geeksforgeeks.org/problems/3b47f0ad00f953dd514235ddec54e39fdc297dda/1/#
Time Complexity: o(n)
Space Complexity: o(n)   //if string contains all element '('
  
  
  int findMaxLen(string s) {
        // code here
        int ans=INT_MIN;
        int res=0;
        stack<int> S;
        S.push(-1);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                S.push(i);
             //   cout<<"-1"<<" ";
            }
            else if(s[i]==')')
            {
                S.pop();
                if(S.size()==0)
                {
                    S.push(i);
               //      cout<<"0"<<" ";
                }
                else
                {
                //    cout<<"1"<<" ";
                    int t=i-S.top();
                //    cout<<"t"<<t<<" ";
                    res=max(res,t);
                }
            }
        }
        return res;
    }
