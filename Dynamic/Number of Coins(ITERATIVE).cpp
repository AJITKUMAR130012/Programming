Problem Statement: https://practice.geeksforgeeks.org/problems/number-of-coins1824/1#
Time Complexity: o(n*target)
Space Complexity: o(n*target)



int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    vector<vector<long long>> t(M+1,vector<long long>(V+1,-1));
	    for(int i=1;i<=V;i++)
	    {
	        t[0][i]=INT_MAX;
	    }
	    for(int i=0;i<=M;i++)
	    {
	        t[i][0]=0;
	    }
	    for(int i=1;i<=M;i++)
	    {
	        for(int j=1;j<=V;j++)
	        {
	            if(j>=coins[i-1])
	            {
	                t[i][j]=min(1+t[i][j-coins[i-1]],t[i-1][j]);
	            }
	            else
	            {
	                t[i][j]=t[i-1][j];
	            }
	        }
	    }
	    int ans= t[M][V];
	    
	    
	    
	    
	  //  long long ans=min_coins(M,V,coins,t);
	    
	    if(ans==INT_MAX) return -1;
	    return ans;
	} 
