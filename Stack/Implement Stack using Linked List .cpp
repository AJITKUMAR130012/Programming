Problem statement: https://practice.geeksforgeeks.org/problems/implement-stack-using-linked-list/1/?page=1&difficulty[]=-1&status[]=solved&status[]=unsolved&category[]=Stack&sortBy=submissions#
Time Complexity: o(1)   ---> for push and for pop both
Space Complexity: o(1)


void MyStack ::push(int x) 
{
    // Your Code
    StackNode *p=new StackNode(x);
    p->next=top;
    top=p;
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    if(top==NULL) return -1;
    StackNode *temp=top;
    top=top->next;
    int x=temp->data;
    free(temp);
    return x;
    // Your Code
}
