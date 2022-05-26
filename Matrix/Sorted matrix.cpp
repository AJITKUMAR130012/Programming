Problem Description: https://practice.geeksforgeeks.org/problems/sorted-matrix2333/1#
Time Complexity: o(n^2*log(n^2))
Space Complexity: o(n^2)
  
  	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	   int i,val=-1;
	   for( i=0;i<m;i++)
	   {
	       if(arr[0][i]==1)
	       {
	           val=0;
	           break;
	       }
	   }
	   int ans=0;
	   ans=(m-i);
	   for(int j=1;j<n;j++)
	   {
	       while(arr[j][i-1]==1)
	       {
	           i--;
	           if(m-i>ans)
	           {
	               val=j;
	               ans=m-i;
	           }
	           
	       }
	   }
	   return val;
	}
