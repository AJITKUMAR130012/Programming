Problem Statement: https:https://practice.geeksforgeeks.org/problems/fab3dbbdce746976ba35c7b9b24afde40eae5a04/1/?page=1&difficulty[]=1&status[]=unsolved&category[]=Stack&sortBy=submissions
Time Complexity: o(n)
Space Complexity: o(n)   -->space taken by stack

vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        stack<int> s;
        vector<int> ans;
        for(int i=n-1;i>=0;i--)
        {
            if(s.size()==0)
            {
                ans.push_back(-1);
            }
            else if(s.size()>0 and s.top()<arr[i])
            {
                ans.push_back(s.top());
            }
            else if( s.size()>0 and s.top()>=arr[i])
            {
                while(s.size()>0 and s.top()>=arr[i])
                {
                    s.pop();
                }
                if(s.size()==0) ans.push_back(-1);
                else ans.push_back(s.top());
            }
            s.push(arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    } 
