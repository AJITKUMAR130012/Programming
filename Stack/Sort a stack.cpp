Problem Description: https://practice.geeksforgeeks.org/problems/sort-a-stack/1/?page=1&difficulty[]=-1&difficulty[]=0&category[]=Stack&sortBy=submissions#
Time Complexity: o(n)
Space complexity: o(n)   --> space due to recursion


void insert(stack<int> &s,int x)
{
    if(s.size()==0 or s.top()<=x)
    {
        s.push(x);
        return;
    }
    int p=s.top();
    s.pop();
    insert(s,x);
    s.push(p);
}
void sort1(stack<int> &s)
{
    if(s.size()==1) return;
    int x=s.top();
    s.pop();
    sort1(s);
    insert(s,x);
}



void SortedStack :: sort()
{
   //Your code here
   sort1(s);
   return;
}
