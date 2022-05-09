Problem Des:https://practice.geeksforgeeks.org/problems/get-min-at-pop/1/?page=1&difficulty[]=0&category[]=Stack&sortBy=submissions#
Time Complexity: o(n)  -->traversing the array
Space Complexity: o(n) --> taking a temporory stack


int me;
stack<int> _push(int arr[],int n)
{
   // your code here
   stack<int> s;
   
   for(int i=0;i<n;i++)
   {
       if(s.size()==0)
       {
           s.push(arr[i]);
           me=arr[i];
       }
       else
       {
           int x=arr[i];
           if(x<me)
           {
               int p=2*x-me;
               s.push(p);
               me=x;
           }
           else
           {
               s.push(x);
           }
       }
   }
   return s;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    // your code here
   while(s.size()!=0){
   if(s.top()>me)
   {
       cout<<me<<" ";
       s.pop();
     
   }
   else
   {
       int y=s.top();
       cout<<me<<" ";
       me=2*me-y;
       s.pop();
       
      
   }
   }
   
}
