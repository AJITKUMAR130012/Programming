Problem Description: https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1#
Time Complexity: o(n)
Space Complexity: o(n+m)   --> uses vector instead of arr.
  
  
  void merge(int a1[], int a2[], int n, int m) {
	    // code here
	    int i=n-1,j=m-1;
	    vector<int> v1,v2;
	    for(int i=0;i<n;i++)
	    {
	        v1.push_back(a1[i]);
	    }
	    for(int i=0;i<m;i++)
	    {
	        v2.push_back(a2[i]);
	    }
	
	    while(i>=0 and j>=0)
	    {
	        if(v2[j]>=v1[i])
	        {
	            j--;
	        }
	        else
	        {
	            v2.insert(v2.begin()+j+1,v1[i]);
	            i--;
	        }
	    }
	    while(i!=-1)
	    {
	        v2.insert(v2.begin(),v1[i]);
	        i--;
	    }
	
	    for(int i=0;i<n;i++)
	    {
	        a1[i]=v2[i];
	    }
	    for(int i=n;i<n+m;i++)
	    {
	        a2[i-n]=v2[i];
	    }
	   
	}
