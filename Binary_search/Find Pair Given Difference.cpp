Problem statement: https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1
Time complexity : o(LlogL)
Space Complexity: o(1)


  int b_s(int *arr,int n,int k)
{
    int s=0,e=n-1;
   
    while(s<=e)
    {
        int m=s+(e-s)/2;
        if(arr[m]==k) return 1;
        if(arr[m]>k) e=m-1;
        else s=m+1;
    }
    return -1;
}



bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
    
    for(int i=0;i<size-1;i++)
    {
        int k=arr[i]+n;
        int f=b_s(arr+i+1,size-(i+1),k);
       
        if(f!=-1) return 1;
    }
    return 0;
    
    
}
