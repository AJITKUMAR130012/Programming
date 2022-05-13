Problem Statement: https://practice.geeksforgeeks.org/problems/save-gotham1222/1/?page=1&difficulty[]=1&status[]=unsolved&category[]=Stack&sortBy=submissions#
Time complexity: o(n)
Space Complexity: o(n)
  
  int save_gotham(int arr[], int n)
{
    // Complete the function
     long long mod=10e9+1;
     stack<int> s;
     vector<int> ans;
     for(int i=n-1;i>=0;i--)
     {
         if(s.size()==0)
         {
             ans.push_back(0);
         }
         else if(s.size()>0 and arr[i]<s.top())
         {
             ans.push_back(s.top());
         }
         else if(s.size()>0 and arr[i]>=s.top())
         {
             while(s.size()>0 and arr[i]>=s.top())
             {
                 s.pop();
             }
             if(s.size()==0)
             {
                 ans.push_back(0);
             }
             else ans.push_back(s.top());
         }
         s.push(arr[i]);
     }
     long long sol=0;
     for(int i=0;i<n;i++)
     {
         sol+=ans[i];
         sol=sol%mod;
     }
     return sol;
     
}
