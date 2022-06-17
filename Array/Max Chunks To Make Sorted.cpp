Problem Description: https://leetcode.com/problems/max-chunks-to-make-sorted/
Time Complexity: o(n)
Space Complexity: o(1)

  int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        int maxv=INT_MIN;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            maxv=max(maxv,arr[i]);
            if(i==maxv) ans++;
        }
        return ans;
    }
