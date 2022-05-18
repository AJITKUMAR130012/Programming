Problem Statement: https://practice.geeksforgeeks.org/problems/adding-array-element4756/1/?page=1&difficulty[]=0&category[]=Heap&sortBy=submissions#
Time Complexity: o(nlogn)
Space omplexity: o(n)
  
  int minOperations(int arr[], int n, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>> q;
        for(int i=0;i<n;i++)
        {
            q.push(arr[i]);
        }
        int ans=0;
        while(q.size()!=0)
        {
            int x=q.top();
            if(x>=k) return ans;
            q.pop();
            int y=q.top();
            q.pop();
            q.push(x+y);
            ans++;
            
        }
        return ans;
    }
