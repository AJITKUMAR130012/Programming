Problem Description: https://practice.geeksforgeeks.org/problems/maximum-difference-10429/1/?page=1&difficulty[]=0&category[]=Map&sortBy=submissions
Time Complexity: o(nlogn)
Space Complexity: o(n)  --> when all element are distinict the all will beinserted into the map

 int maxDiffIndex(int A[], int N)
    {
        int ans=0;
        map<int,int> m;
        for(int i=N-1;i>=0;i--)
        {
            if(m.find(A[i])==m.end())
            {
            m[A[i]]=i;
            }
            else
            {
                ans=max(ans,m[A[i]]-i);
            }
        }
        return ans;
        
    }
