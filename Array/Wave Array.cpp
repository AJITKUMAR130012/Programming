Problem Description:  https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
Time Complexity: o(n)
Space Complexity: o(1)

 void convertToWave(int n, vector<int>& arr){
        
       
       for(int i=0;i<n;i=i+2)
       {
           if(i-1>=0 and arr[i-1]>arr[i])
           {
               swap(arr[i],arr[i-1]);
           }
           if(i+1<n and arr[i+1]>arr[i])
           {
               swap(arr[i],arr[i+1]);
           }
       }
        
    }
