Problem Statement:https://practice.geeksforgeeks.org/problems/clone-a-stack-without-usinig-extra-space/1/?page=1&difficulty[]=1&status[]=unsolved&category[]=Stack&sortBy=submissions
Space Complexity: o(1) actually this function(recursion) call takes extra space-->0(n) but we are not using any container
Time Complexity: o(n)
  
    void clonestack(stack<int> st, stack<int>& cloned)
    {
        //code here
        if(st.size()==1)
        {
            cloned.push(st.top());
            return;
        }
        int k=st.top();
        st.pop();
        clonestack(st,cloned);
        cloned.push(k);
    }
