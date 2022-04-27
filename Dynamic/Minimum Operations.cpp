problem Statement: https://practice.geeksforgeeks.org/problems/find-optimum-operation4504/1/?page=1&difficulty[]=-1&difficulty[]=0&status[]=unsolved&category[]=Dynamic%20Programming&sortBy=submissions
Space Complexity: o(n)
Time Complexity: o(n)
  
  int minOperation(int n)
    {
        //code here.
        vector<int> t(n+1);
        t[0]=0;
        t[1]=1;
        for(int i=2;i<=n;i++)
        {
            if(i&1) t[i]=1+t[i-1];
            else t[i]=t[i/2]+1;
        }
        return t[n];
    }
