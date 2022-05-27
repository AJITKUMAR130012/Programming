Problem Description: https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1#
Time Complexity: o(mlogn)    ---> for every swap i am doing sort in first array
Space Complexity: o(1)
  
  
  	void merge(int a1[], int a2[], int n, int m)
	  {
	    // code here
    	   int i=n-1,j=m-1;
    	   while(j>=0)
    	   {
    	       if(a2[j]>=a1[i])
    	       {
    	           j--;
    	       }
    	       else
    	       {
    	           swap(a2[j],a1[i]);
    	           sort(a1,a1+n);
    	           j--;
    	       }
    	   }
	  }
