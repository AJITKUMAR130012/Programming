Problem Statement: https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1#
Time Complexity: o(n)
Space Complexity: o(n)
  
  
   vector<int> duplicates(int arr[], int n) {
        // code here
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        vector<int> ans;
        for( auto c:m)
        {
            if(c.second>1)
            ans.push_back(c.first);
        }
        vector<int> v(1,-1);
        if(ans.size()==0) return v;
        sort(ans.begin(),ans.end());
        return ans;
    }
