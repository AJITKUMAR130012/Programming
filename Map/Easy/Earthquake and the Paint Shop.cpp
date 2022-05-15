Problem Description:https://practice.geeksforgeeks.org/problems/earthquake-and-the-paint-shop4518/1/?page=1&difficulty[]=0&category[]=Map&sortBy=submissions#
Time Complexity: on(nlogn)
Space Complexity: o(n)
  
   vector<alphanumeric> sortedStrings(int N, vector<string> A) {
        // code here
        sort(A.begin(),A.end());
        map<string,int> m;
        int n=A.size();
        for(int i=0;i<n;i++)
        {
            m[A[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(m.find(A[i])!=m.end())
            {
            
            cout<<A[i]<<" "<<m[A[i]]<<endl;
            m.erase(A[i]);
            }
        }
        vector<alphanumeric> ans;
        return ans;
    }
