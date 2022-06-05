Problem description: https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1#
Time Complexity:o(n^2)
Space Complexity: o(n)
  
  	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    if(n==0) return 0;
	    vector<int> ans(n,0);
	    int val=arr[0];
	    ans[0]=arr[0];
	    for(int i=1;i<n;i++)
	    {
	        for(int j=i;j>=0;j--)
	        {
	            if(arr[j]<arr[i])
	            {
	                ans[i]=max(ans[i],arr[i]+ans[j]);
	                
	            }
	            ans[i]=max(ans[i],arr[i]);
	            val=max(val,ans[i]);
	        }
	    }
	 
	    return val;
	}  
