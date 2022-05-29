Problem Statement: https://practice.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1/
Time complexity: o(n)
Space Complexity: o(1)
  
  
   void segregate0and1(int arr[], int n) {
        // code here
        int left=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                left++;
                swap(arr[left],arr[i]);
            }
        }
        
    }
