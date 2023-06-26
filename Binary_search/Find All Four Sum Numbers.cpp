Problem statement: https://practice.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1
Time Complexity : O(N^3logN)
Space Complexity: o(N)

 class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    
    int b_s(vector<int> &v, int s, int e, int k)
    {
        while(s<=e)
        {
            int m=s+(e-s)/2;
            if(v[m]==k) return 1;
            if(v[m]>k) e=m-1;
            else s=m+1;
        }
        return -1;
    }
    
    
    
    
    
    vector<vector<int> > fourSum(vector<int> &arr, int K) {
        sort(arr.begin(), arr.end());
        // Your code goes here
        int n=arr.size();
        vector<vector<int>> ans;
        set<vector<int>> s;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    int x=K-(arr[i] + arr[j] + arr[k]);
                    int f=b_s(arr, k+1, n-1, x);
                    if(f==1)
                    {
                     //   cout<<i<<" "<<j<<" "<<k<<" "<<x<<endl;
                        
                        vector<int> v;
                        v.push_back(arr[i]);
                        v.push_back(arr[j]);
                        v.push_back(arr[k]);
                        v.push_back(x);
                        s.insert(v);
                    }
                }
            }
        }
        for( auto c: s)
        {
            ans.push_back(c);
        }
        return ans;
    }
};
