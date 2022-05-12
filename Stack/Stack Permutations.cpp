Problem Description: https://practice.geeksforgeeks.org/problems/stack-permutations/1/?page=2&difficulty[]=1&category[]=Stack&sortBy=submissions#
Time Complexity: o(n)
Space Compleity: o(n)
  
   int isStackPermutation(int N,vector<int> &A,vector<int> &B){
        stack<int> s;
        int n=A.size();
        int m=A.size();
        if(n!=m) return 0; 
        int j=0;
        for(int i=0;i<n;i++)
        {
            s.push(A[i]);
            while(s.size()>0 and s.top()==B[j])
            {
                s.pop();
                j++;
            }
        }
        if(j==n) return 1;
        return 0;
        
    }
