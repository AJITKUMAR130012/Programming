Problem Des: https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions-and-insertions0209/1#
Time Complexity: o(n*m)
Space Complexity: o(n*m)

int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    int n=str1.length();
	    int m=str2.length();
	    vector<vector<int>> t(n+1,vector<int> (m+1));
	    for(int i=0;i<=n;i++)
	    {
	        for(int j=0;j<=m;j++)
	        {
	            if(i==0 or j==0)
	            {
	                t[i][j]=0;
	                continue;
	            }
	            if(str1[i-1]==str2[j-1])
	            {
	                t[i][j]=1+t[i-1][j-1];
	            }
	            else
	            {
	                t[i][j]=max(t[i-1][j],t[i][j-1]);
	            }
	        }
	    }
	    return n+m-2*t[n][m];
	    
	} 
