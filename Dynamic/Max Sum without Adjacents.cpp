Problem Statement: https://practice.geeksforgeeks.org/problems/max-sum-without-adjacents2430/1/
time Complexity: o(n)
Space ComplexitY: o(n)
  
  
  int findMaxSum(int *arr, int n) {
	    // code here
	    vector<vector<int>> t(2,vector<int>(n,0));
	    t[0][0]=arr[0];
	    t[1][0]=0;
	    for(int i=1;i<n;i++){
	        t[0][i]=t[1][i-1]+arr[i];
	        t[1][i]=max(t[0][i-1],t[1][i-1]);
	    }
	    return max(t[0][n-1],t[1][n-1]);
	}
