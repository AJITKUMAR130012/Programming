Problem Description:https://practice.geeksforgeeks.org/problems/perfect-sum-problem5633/1#
TIme Complexity: o(n*sum)
Space Complexity: o(n*sum)
  
  #define mod 1000000007
	   int fun(int n,int sum,int arr[],vector<vector<int>> &t)
    {
          if(n == 0 and sum != 0) return 0;
    if(n == 0 and sum == 0) return 1;
        if(t[n][sum]!=-1) return t[n][sum];
        if(sum>=arr[n-1])
        return t[n][sum]=(fun(n-1,sum-arr[n-1],arr,t)%mod + fun(n-1,sum,arr,t)%mod)%mod;
        else return t[n][sum]=fun(n-1,sum,arr,t)%mod;
    }
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        vector<vector<int>> t(n+1,vector<int>(sum+1,-1));
        int ans=fun(n,sum,arr,t);
        return ans%mod;
	}
