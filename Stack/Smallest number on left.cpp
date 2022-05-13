Problem Statement: https://practice.geeksforgeeks.org/problems/smallest-number-on-left3403/1/?page=1&difficulty[]=1&status[]=unsolved&category[]=Stack&sortBy=submissions
Time Comlexity: o(n)
Space Complexity: o(n)
    
 vector<int> leftSmaller(int n, int arr[]){
        // code here
        vector<int> ans;
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            if(s.size()==0)
            {
                ans.push_back(-1);
            }
            else if(s.size()>0 and arr[i]>s.top())
            {
                ans.push_back(s.top());
            }
            else if(s.size()>0 and arr[i]<=s.top())
            {
                while(s.size()>0 and arr[i]<=s.top())
                {
                    s.pop();
                }
                if(s.size()==0) ans.push_back(-1);
                else ans.push_back(s.top());
            }
            s.push(arr[i]);
        }
        return ans;
    }
