Problem Description: https://practice.geeksforgeeks.org/problems/modular-multiplicative-inverse-1587115620/1
Time Complexity: o(log(max(a,b)))
Space Complexity:  o(log(max(a,b)))
  
   void GCD(int a,int b,int &x,int &y,int &ans)
    {
        if(b==0)
        {
            ans=a;
            x=1;
            y=0;
            return;
        }
        GCD(b,(a%b),x,y,ans);
        int curr_x=y;
        int curr_y=x-((a/b)*y);
        x=curr_x;
        y=curr_y;
    }
    
    int modInverse(int a, int m)
    {
        //Your code here
        if(m==1)
        {
            return -1;
        }
        int x,y,ans;
        GCD(a,m,x,y,ans);
       
        int res = (x % m + m) % m;
    
        if(ans==1) return res;
        return -1;
    }
