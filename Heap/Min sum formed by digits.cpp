Problem Statement: https://practice.geeksforgeeks.org/problems/min-sum-formed-by-digits3551/1/?page=1&difficulty[]=0&category[]=Heap&sortBy=submissions#
Time Complexity: o(nlogn)
Space complexity: o(n)
  
  long long int minSum(int arr[], int n)
    {
        // Your code goes here
        priority_queue<int,vector<int>,greater<int>> q;
        for(int i=0;i<n;i++)
        {
            q.push(arr[i]);
        }
        long long a=0,b=0;
        while(1)
        {
            if(q.size()==0) break;
            int x=q.top();
            a=a*10;
            a+=x;
            q.pop();
            if(q.size()==0)
            {
                break;
            }
            int y=q.top();
            b=b*10;
            b+=y;
            q.pop();
        }
     //   cout<<"a="<<a<<"b="<<b<<" ";
        return a+b;
    }
