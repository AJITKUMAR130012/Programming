Problem Description: https://practice.geeksforgeeks.org/problems/check-if-a-string-is-repetition-of-its-substring-of-k-length3302/1/?page=1&difficulty[]=1&status[]=unsolved&category[]=Map&sortBy=submissions#
Time Complexity: o(n/k)
Space Complexity: o(n/k) --> if all substring of length k is different

int kSubstrConcat (int n, string s, int k)
	{
	    // Your Code Here
	    map<string,int> m;
	    if(n%k!=0) return 0;
	    for(int i=0;i<n;i=i+k)
	    {
	        string p=s.substr(i,k);
	        m[p]++;
	    }
	   if(m.size()>2) return 0;
	   bool flag=false;
	   for(auto c:m)
	   {
	       if(c.second==1 or c.second==(n/k))
	       {
	           flag=true;
	       }
	   }
	    return flag?1:0;
	}
