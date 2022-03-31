Problem Description: https://practice.geeksforgeeks.org/problems/number-of-coins1824/1#
Time Complexity: o(n*target)
Space Complexity: o(n*target)
  
  
  	long long min_coins(int n,int target,int coins[],vector<vector<int>> &t)
	{
	    if(target==0 and n==0) return 0;
	    if(target!=0 and n==0) return INT_MAX;
	    if(target==0) return 0;
	    if(t[n][target]!=-1) return t[n][target];
	    if(target>=coins[n-1])
	    {
	        return t[n][target]= min(1+min_coins(n,target-coins[n-1],coins,t),min_coins(n-1,target,coins,t));
	    }
	    else
	    {
	        return t[n][target]= min_coins(n-1,target,coins,t);
	    }
	}
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    vector<vector<int>> t(M+1,vector<int>(V+1,-1));
	    long long ans=min_coins(M,V,coins,t);
	    if(ans==INT_MAX) return -1;
	    return ans;
	} 
