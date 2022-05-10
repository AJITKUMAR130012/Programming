Problem Description: https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1/?page=1&difficulty[]=1&category[]=Stack&sortBy=submissions
Time Complexity: o(n)
Space Complexity: o(n) --> space taen by stack

int celebrity(vector<vector<int> >& t, int n) 
    {
        // code here 
        int a,b;
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            s.push(i);
        }
        while(s.size()!=0)
        {
            b=s.top();
            s.pop();
            if(s.size()==0) break;
            a=s.top();
            s.pop();
            if(t[a][b]==1)
            {
                s.push(b);
            }
            else if(t[b][a]==1) 
            {
                s.push(a);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(t[b][i]!=0) return -1;
        }
        int cn=0;
        for(int i=0;i<n;i++)
        {
            if(t[i][b]==1) cn++;
        }
        if(cn==n-1) return b;
        return -1;
    }
  
