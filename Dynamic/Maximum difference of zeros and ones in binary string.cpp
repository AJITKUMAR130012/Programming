Problem Statement: https://practice.geeksforgeeks.org/problems/maximum-difference-of-zeros-and-ones-in-binary-string4111/1#
Time Complexity: o(n)
Space Complexity: o(1)
  
  	int maxSubstring(string S)
	{
	    // Your code goes here
	    int sum=0,ans=0;
	    for(int i=0;i<S.length();i++)
	    {
	        if(S[i]=='1')
	        {
	            sum+=1;
	        }
	        else
	        {
	            sum-=1;
	        }
	        ans=min(ans,sum);
	        if(sum>0)
	        {
	            sum=0;
	        }
	    }
	    if(ans==0) return -1;
	    return abs(ans);
	}
