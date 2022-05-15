Problem Description: https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1/?page=1&difficulty[]=0&category[]=Map&sortBy=submissions
Time Complexity: o(nlogn)
Space Complexity: o(n)


bool subArrayExists(int arr[], int n)
    {
        //Your code here
        map<int,int> m;
        int sum=0;
        m[0]=1;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(m.find(sum)!=m.end()) return true;
            m[sum]++;
        }
        return false;
    }
