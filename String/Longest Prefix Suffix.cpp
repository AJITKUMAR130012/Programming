Problem Description: https://practice.geeksforgeeks.org/problems/longest-prefix-suffix2527/1
Time Complexity: o(n)
Space Complexity: o(n)
  
 int lps(string s) {
	    // Your code goes here
	    
	    int n=s.length();
	    vector<int> ans(n,0);
	    int i=0,j=1;
	    while(j<n)
	    {
	        if(s[i]==s[j])
	        {
	            ans[j]=i+1;
	            i++;
	            j++;
	        }
	        else
	        {
	            if(i!=0)
	            {
	                i=ans[i-1];
	            }
	            else
	            {
	                j++;
	            }
	        }
	        
	    }
	    return ans[n-1];
	}
