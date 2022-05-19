Problem Statement: https://practice.geeksforgeeks.org/problems/alone-in-couple5507/1/#
Time Complexity: o(n)
Space Complexity: o(1)
  
   int findSingle(int N, int arr[]){
        // code here
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum=sum^arr[i];
        }
        return sum;
    }
