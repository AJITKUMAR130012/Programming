Problem Description: https://practice.geeksforgeeks.org/problems/linear-diophantine-equations5649/1
Time Complexity: o(log(max(a,b)))
Space Complexity: o(log(max(a,b)))
  
  class Solution{
public:
    int GCD(int a,int b)
    {
        if(b==0) return a;
        return GCD(b,(a%b));
    }
    int isPossible(int A, int B, int C){
        // code here
        int g=GCD(A,B);
        if(C%g==0) return 1;
        return 0;
    }
};
