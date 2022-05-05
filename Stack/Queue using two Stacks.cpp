Problem Statement: https://practice.geeksforgeeks.org/problems/queue-using-two-stacks/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Stack&sortBy=submissions
Time Complexity: o(n)
Space Complexity: o(n) Using two stack



void StackQueue :: push(int x)
{
    // Your Code
    s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        // Your Code 
        if(s2.size()==0 and s1.size()==0) return -1;
        if(s2.size()==0)
        {
            while(s1.size()!=0)
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int temp=s2.top();
        s2.pop();
        return temp;
}
