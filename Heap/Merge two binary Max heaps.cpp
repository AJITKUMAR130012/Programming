Problem Description: https://practice.geeksforgeeks.org/problems/merge-two-binary-max-heap0144/1/?page=1&difficulty[]=0&category[]=Heap&sortBy=submissions#
Time Complexity: o(nlogn)
Space Complexity: o(n+m)
  
  vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        priority_queue<int> q;
        for(int i=0;i<a.size();i++)
        {
            q.push(a[i]);
        }
         for(int i=0;i<b.size();i++)
        {
            q.push(b[i]);
        }
        vector<int> ans;
        while(q.size()!=0)
        {
            ans.push_back(q.top());
            q.pop();
        }
        return ans;
    }
