Problem statement:https://practice.geeksforgeeks.org/problems/equal-sum0810/1/
Time complexity: o(n)
Space Complexity: o(n)   --> we are taking extra space


string equilibrium(int *arr, int n) {
        // code here
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        vector<int> left(n,0),right(n,0);
        for(int i=1;i<n;i++)
        {
            left[i]=arr[i-1]+left[i-1];
        }
        for(int i=0;i<n;i++)
        {
            right[i]=sum-arr[i];
            sum=sum-arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(left[i]==right[i]) return "YES";
        }
        return "NO";
    }
