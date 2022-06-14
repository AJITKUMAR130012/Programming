problem Description: https://leetcode.com/problems/sum-of-two-integers/
Time Complexity: o(log(max(a,b)))
Space Complexity: o(1)
  
   int getSum(int a, int b) {
        int res=0;
        if(b<unsigned(a)) swap(a,b);
        while(b!=0 )
        {
            res=a^b;
            b=(unsigned(a&b)<<1);
            a=res;
        }
        return res;
    }
