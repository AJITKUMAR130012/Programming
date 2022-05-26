Problem Description: https://practice.geeksforgeeks.org/problems/even-and-odd/1
Time Complexity: o(n)
Space Complexity: o(1)
  
   void reArrange(int arr[], int N) {
        // code here
        int even=0,odd=1;
       while(1)
       {
           while(even<N and !(arr[even]&1))
           {
               even+=2;
           }
            while(odd<N and (arr[odd]&1))
           {
               odd+=2;
           }
           if(even<N and odd<N)
           {
               swap(arr[even],arr[odd]);
           }
           else break;
       }
    }
