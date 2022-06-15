Problem Description: https://leetcode.com/problems/powx-n/
Time Complexity: o(log(n))
Space Complexity: o(1)
  
   double myPow(double x, int n) { 
        double ans=1.0,val=x;
        bool flag=false;
        if(n<0) flag=true;
        long long p=abs(n);
        if(x==1) return 1; 
        while(p)
        {
            if(p&1) ans*=val;
            val*=val;
            p=p>>1;
        }
        if(flag) return 1/ans;
        return ans;
        
    }
