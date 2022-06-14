Problem Description: https://leetcode.com/problems/reverse-bits/
Time Complexity: o(1)
Space Complexity: o(1)
  
  uint32_t reverseBits(uint32_t n) {
        
     uint32_t res=0;
        for(int i=0;i<32;i++)
        {
            uint32_t lsb=1;
            lsb=lsb&n;
            lsb=lsb<<(31-i);
            res=res | lsb;
            n=n>>1;
        }
        return res;
    }
