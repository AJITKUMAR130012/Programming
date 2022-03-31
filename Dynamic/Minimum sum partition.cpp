Problem Description: https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1/?page=2&category[]=Dynamic%20Programming&sortBy=submissions#
Time Complexity: o(n*Total_sum)
Space Complexity: o(n*total_sum)


int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int target=0;
	    for(int i=0;i<n;i++) target+=arr[i];
	    int t[n+1][target+1];
	    for(int i=0;i<=n;i++)
	    {
	        t[i][0]=true;
	    }
	    for(int i=1;i<=target;i++)
	    {
	        t[0][i]=false;
	    }
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=target;j++)
	        {
	            if(j>=arr[i-1])
	            {
	                t[i][j]=t[i-1][j] or t[i-1][j-arr[i-1]];
	            }
	            else
	            {
	                t[i][j]=t[i-1][j];
	            }
	        }
	    }
	    vector<int> v;
	    for(int i=0;i<=target;i++)
	    {
	        if(t[n][i]==true)
	        {
	            v.push_back(i);
	        }
	    }

	    int ans1=INT_MAX;
	    int ans2;
	    for(int i=0;i<v.size();i++)
	    {
	        if(ans1>abs(2*v[i]-target))
	        {
	            ans1=abs(2*v[i]-target);
	            ans2=v[i];
	        }
	    }
	    ans1=target-ans2;
	    return abs(ans1-ans2);
	} 
