Problem statement: https://practice.geeksforgeeks.org/problems/k-largest-elements3736/1/?page=1&difficulty[]=-1&category[]=Heap&sortBy=submissions#
time Complexity: o(nlogk)
Space Complexity: o(k)
  
  vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        priority_queue<int,vector<int>,greater<int>> q;
        for(int i=0;i<n;i++)
        {
            q.push(arr[i]);
            if(q.size()>k) q.pop();
        }
        vector<int> ans;
        while(q.size()!=0)
        {
            ans.push_back(q.top());
            q.pop();
        }
     //   sort(ans.begin(),ans.end());
     reverse(ans.begin(),ans.end());
        return ans;
    }
