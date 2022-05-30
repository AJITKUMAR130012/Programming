Problem Description: https://leetcode.com/problems/trapping-rain-water/
Time Complexity: o(n)
Space Complexity: o(n)   --> space taken by stack


 int trap(vector<int>& height) {
        int n=height.size();
        vector<int> left(n,0),right(n,0);
        left[0]=height[0];
        int val=left[0];
        for(int i=1;i<n;i++)
        {
            val=max(val,height[i]);
            left[i]=val;
        }
        right[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
        {
            right[i]=max(right[i+1],height[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int p=min(left[i],right[i])-height[i];
            ans+=p;
        }
        return ans;
    }
