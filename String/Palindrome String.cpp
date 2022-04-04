Problem Statement: https://practice.geeksforgeeks.org/problems/palindrome-string0817/1
Time complexity: o(n)
Space Complexity: o(1)
  
  	int isPalindrome(string S)
	{
	    // Your code goes here
	    int i=0,j=S.length()-1;
	    while(i<j)
	    {
	        if(S[i]!=S[j]) return 0;
	        i++;
	        j--;
	    }
	    return 1;
	}
