Problem Description: https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1/?page=2&category[]=Dynamic%20Programming&sortBy=submissions
T.c : o(n*sum)
Space complexity: o(n*sum)
// memoization

 bool fun(int n,int sum,vector<int> &arr,vector<vector<int>> &t)
    {
        if(sum==0) return true;
        if(n==0) return false;
        if(t[n][sum]!=-1) return t[n][sum];
        if(sum>=arr[n-1])
        return t[n][sum]=fun(n-1,sum-arr[n-1],arr,t) or fun(n-1,sum,arr,t);
        else return t[n][sum]=fun(n-1,sum,arr,t);
    }



    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n=arr.size();
        vector<vector<int>> t(n+1,vector<int>(sum+1,-1));
        bool ans=fun(n,sum,arr,t);
        return ans;
    }
