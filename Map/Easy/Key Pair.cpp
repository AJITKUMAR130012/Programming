Problem Statement: https://practice.geeksforgeeks.org/problems/key-pair5616/1/#
Time Complexity: o(n)
Space Complexity: o(n)
  
bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    unordered_map<int,int> m;
	    for(int i=0;i<n;i++)
	    {
	        m[arr[i]]=i;
	    }
	
	    for(int i=0;i<n;i++)
	    {
	        int a=arr[i];
	        int b=x-a;
	        if(m.find(b)!=m.end() and m[b]!=i)
	        {
	   
	            return true;
	        }
	    }
	    return false;
	}
