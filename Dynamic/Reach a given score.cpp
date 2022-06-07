Problem Description: https://practice.geeksforgeeks.org/problems/reach-a-given-score-1587115621/1#
Time Complexity: o(n)
Space Complexity: o(n)
  
  
  long long int count(long long int n)
{
	vector<int> arr;
	arr.push_back(3);
	arr.push_back(5);
	arr.push_back(10);
	vector<vector<long long>> t(4,vector<long long>(n+1,0));
	for(int i=0;i<=3;i++)
	{
	    for(int j=0;j<=n;j++)
	    {
	        if(j==0)
	        {
	            t[i][j]=1;
	            continue;
	        }
	        if(i==0)
	        {
	            t[i][j]=0;
	            continue;
	        }
	        if(j>=arr[i-1])
	        {
	           t[i][j]=t[i-1][j]+t[i][j-arr[i-1]]; 
	        }
	        else
	        {
	            t[i][j]=t[i-1][j];
	        }
	    }
	}
	
	
	return t[3][n];
}
