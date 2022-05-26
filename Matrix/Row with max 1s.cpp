Problem Description: https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1
Time Complexity: o(nlogm)   n is the number of row and m is the number of column
Space Complexity: o(1)
  
  	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int ans=0;
	    int val=-1;
	    for(int i=0;i<n;i++)
	    {
	        int p=(upper_bound(arr[i].begin(),arr[i].begin()+m,0)-arr[i].begin());
	      //  cout<<p<<endl;
	        if(ans<m-p)
	        {
	            ans=m-p;
	            val=i;
	        }
	        
	        
	    }
	    return val;
	}
