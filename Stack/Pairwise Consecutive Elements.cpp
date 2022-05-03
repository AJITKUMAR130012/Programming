Problem Statement:https://practice.geeksforgeeks.org/problems/pairwise-consecutive-elements/1/?page=1&difficulty[]=-2&difficulty[]=-1&category[]=Stack&sortBy=submissions#
Time Complexity: o(n)
Space Complexity: o(n)
  
  bool pairWiseConsecutive(stack<int> s)
{
    //Code here
    if(s.size()==0) return true;

    if(s.size()&1)
    {
    
        s.pop();
    }
    if(s.size()==0) return true;
    int a=s.top();
    s.pop();
    int b=s.top();
    s.pop();
    int p=a-b;
    if(!p or abs(p)>1 ) return false;
    if(s.size()==0) return true;
    while(s.size()!=0)
    {
        int x=s.top();
        s.pop();
        int y=s.top();
        s.pop();
        if(x-y!=p) return false;
    }
    return true;
    
    return false;
    
}
