Pronlem Statement: https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1
Space Complexity: o(n^2)
Time Complexity: o(n^2)
  
  
  int LongestRepeatingSubsequence(string str){
		    // Code here
		    int n=str.length();
		    vector<vector<int>> t(n+1,vector<int>(n+1));
		    for(int i=0;i<=n;i++)
		    {
		        for(int j=0;j<=n;j++)
		        {
		            if(i==0 or j==0)
		            {
		                t[i][j]=0;
		                continue;
		            }
		            if(str[i-1]==str[j-1] and i!=j)
		            {
		                t[i][j]=1+t[i-1][j-1];
		            }
		            else
		            {
		                t[i][j]=max(t[i-1][j],t[i][j-1]);
		            }
		        }
		    }
		    return t[n][n];
		}
