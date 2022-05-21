Problem Statement: https://practice.geeksforgeeks.org/problems/kth-largest-element-in-a-stream2220/1/?page=1&difficulty[]=1&category[]=Heap&sortBy=submissions#
Time Complexity: o(n*log(k))
Space Complexity: o(k)
  
   vector<int> kthLargest(int k, int arr[], int n) {
        // code here
        priority_queue<int,vector<int>,greater<int>> q;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            q.push(arr[i]);
            if(q.size()<k) ans.push_back(-1);
            if(q.size()>k) q.pop();
            if(q.size()==k) ans.push_back(q.top());
            
            
        }
        return ans;
    }
