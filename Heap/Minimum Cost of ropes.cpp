problem statement: https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1/?page=1&difficulty[]=0&category[]=Heap&sortBy=submissions
Time Complexity: o(nlong)
Space Complexity: o(n)
  
  long long minCost(long long arr[], long long n) {
        // Your code here
        long long ans=0;
        priority_queue<long long,vector<long long>,greater<long long>> q;
        for(long long i=0;i<n;i++)
        {
            q.push(arr[i]);
        }
        while(q.size()!=0)
        {
            long long a=q.top();
            if(q.size()==1)
            {
                q.pop();
            //    ans+=a;
                break;
            }
            q.pop();
            long long b=q.top();
            q.pop();
            q.push(a+b);
            ans+=(a+b);
        }
        return ans;
    }
