Problem Definition: https://practice.geeksforgeeks.org/problems/implement-stack-using-array/1/?page=1&difficulty[]=-1&status[]=solved&status[]=unsolved&category[]=Stack&sortBy=submissions#
Time Complexity:o(1)
Space Complexity: o(1)

void MyStack :: push(int x)
{
    // Your Code
 //   if(top<1000)
 //   {
    top++;
//    }
   // cout<<s.top<<" t";
    arr[top]=x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code
    
    if(top==-1) return -1;
   
    int x=arr[top];
    top--;
    return x;
    
}
