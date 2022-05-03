
Problem Statement:https://practice.geeksforgeeks.org/problems/delete-array-elements-which-are-smaller-than-next-or-become-smaller3115/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Stack&sortBy=submissions
Time Complexity: o(n*k)
Space Complexity: o(n)



vector<int> deleteElement(int arr[],int n,int k)
{
    // complete the function
    stack<int> s;
    s.push(arr[0]);
    int cn=0;
    for(int i=1;i<n;i++)
    {
        while(s.size()>0  and arr[i]>s.top() and cn<k)
        {
            cn++;
            s.pop();
        }
        s.push(arr[i]);
    }
    vector<int> ans;
    while(s.size()!=0)
    {
        ans.push_back(s.top());
        s.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
    
}
