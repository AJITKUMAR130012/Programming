Problem Statement: https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions-to-make-a-sorted-sequence3248/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Dynamic%20Programming&sortBy=submissions
Time Complexity:o(n^2)
Space Complexity: o(n)
  
  int minDeletions(int arr[], int n) 
	{ 
	    // Your code goes here
	    int ans=0;
	    vector<int> t(n+1,0);
	    for(int i=0;i<n;i++)
	    {
	        int val=0;
	        for(int j=0;j<i;j++)
	        {
	            if(arr[j]<arr[i])
	            {
	                val=max(val,t[j]);
	            }
	        }
	        t[i]=1+val;
	        ans=max(ans,t[i]);
	    }
	    return n-ans;
	} 
