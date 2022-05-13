Problem Description:https://practice.geeksforgeeks.org/problems/9656e96f6eaee49e67400fa2aed7833c8d9846b8/1/?page=2&difficulty[]=1&category[]=Stack&sortBy=submissions
Time Complexity: o(n)
Space Complexity: o(n)
  
  vector<int> print_next_greater_freq(int arr[],int n)
    {
        // code here
        map<int,int> m;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        stack<int> s;
        for(int i=n-1;i>=0;i--)
        {
            if(s.size()==0)
            {
                ans.push_back(-1);
            }
            else if(s.size()>0 and m[arr[i]]<m[s.top()])
            {
                ans.push_back(s.top());
            }
            else if(s.size()>0 and m[arr[i]]>=m[s.top()])
            {
                while(s.size()>0 and m[arr[i]]>=m[s.top()])
                {
                    s.pop();
                }
                if(s.size()==0) ans.push_back(-1);
                else ans.push_back(s.top());
            }
            s.push(arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
