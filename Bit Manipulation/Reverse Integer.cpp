Problem Description: https://leetcode.com/problems/reverse-integer/
Time Complexity: o(log(n)) // number of digit in integer
Space Complexity: o(1)
  
   int reverse(int x) {
        long long res=0,prev=0;
        while(x)
        {
            int rem=x%10;
            x=x/10;
            res=res*10+rem;
            if(prev!=(res-rem)/10) return 0;
            prev=res;
        }
        if(res<=INT_MAX and res>=INT_MIN) return res;
        return 0;
    }
