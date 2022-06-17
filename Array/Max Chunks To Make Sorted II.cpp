Problem Description:https://leetcode.com/problems/max-chunks-to-make-sorted-ii/
Time complexity: o(n)
Space Complexity: o(n)
  
int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        vector<int> left(n,INT_MIN);
        vector<int> right(n+1,INT_MAX);
        left[0]=arr[0];
        int minv=left[0];
        for(int i=1;i<n;i++) minv=left[i]=max(minv,arr[i]);
        right[n-1]=arr[n-1];
        minv=right[n-1];
        for(int i=n-1;i>=0;i--)
        {
            minv=right[i]=min(minv,arr[i]);
        }
        int ans=0;
       
        for(int i=0;i<n;i++)
        {
           if(left[i]<=right[i+1]) ans++;
        }
        return ans;
    }
