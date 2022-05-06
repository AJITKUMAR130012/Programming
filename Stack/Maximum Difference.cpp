Problem Definition :https://practice.geeksforgeeks.org/problems/maximum-difference-1587115620/1/?page=1&difficulty[]=0&category[]=Stack&sortBy=submissions#
Space Complexity: o(n) --Space taken by stack
Time Complexity: o(n)
  
  
  void ls(int A[],vector<int> &v1,int n)
    {
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            if(s.size()==0)
            {
                v1.push_back(0);
            }
            else if(s.top()<A[i])
            {
                v1.push_back(s.top());
            }
            else if(s.top()>=A[i])
            {
                while(s.size()>0 and s.top()>=A[i])
                {
                    s.pop();
                }
                if(s.size()==0) v1.push_back(0);
                else v1.push_back(s.top());
            }
            s.push(A[i]);
        }
    }
      void rs(int A[],vector<int> &v1,int n)
    {
        stack<int> s;
        for(int i=n-1;i>=0;i--)
        {
            if(s.size()==0)
            {
                v1.push_back(0);
            }
            else if(s.top()<A[i])
            {
                v1.push_back(s.top());
            }
            else if(s.top()>=A[i])
            {
                while(s.size()>0 and s.top()>=A[i])
                {
                    s.pop();
                }
                if(s.size()==0) v1.push_back(0);
                else v1.push_back(s.top());
            }
            s.push(A[i]);
        }
        reverse(v1.begin(),v1.end());
    }
    void display(vector<int> &v)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
    }
    
    int findMaxDiff(int A[], int n)
    {
      //Your code here
      vector<int> v1,v2;
      ls(A,v1,n);
      rs(A,v2,n);
      int ans=0;
      for(int i=0;i<n;i++)
      {
          ans=max(ans,abs(v1[i]-v2[i]));
      }
      return ans;
    }
