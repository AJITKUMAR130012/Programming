Problem Statement: https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Stack&sortBy=submissions
Time Complexity: o(n)
Space Complexity: o(n)
// here our aim to make q2 empty all time and push will be done in q2. pop will be done from q1.
void QueueStack :: push(int x)
{
        // Your Code
        q2.push(x);
        while(q1.size()!=0)
        {
            int p=q1.front();
            q2.push(p);
            q1.pop();
        }
        swap(q1,q2);
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code
        if(q1.size()==0) return -1;
        int x=q1.front();
        q1.pop();
        return x;
}
