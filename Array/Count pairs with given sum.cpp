Problem Description: https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1#
Time Complexity: o(n)
Space Complexity: o(n)

int getPairsCount(int arr[], int n, int k) {
        // code here
        map<int,int> m;
        int ans=0;
        for(int i=0;i<n;i++) m[arr[i]]++;
   
        for(int i=0;i<n;i++)
        {
            int p=k-arr[i];
            if(m.find(p)!=m.end() and p!=arr[i])
            {
           
                ans+=m[p];
                m[arr[i]]--;
            }
            else if(m.find(p)!=m.end() and p==arr[i])
            {
                int k=m[p]-1;
                m[arr[i]]--;
                ans+=k;
            }
        }
        return ans;
    }
