Problem : https://practice.geeksforgeeks.org/problems/searching-in-an-array-where-adjacent-differ-by-at-most-k0456/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
Time complextity : o(N)
Space Complexity: o(1)

int search(int arr[], int n, int x, int k)
{
    // Complete the function
    int i=0;
    while(i<n)
    {
        if(arr[i]==x) return i;
        int step=abs(arr[i]-x)/k;
        i+=max(1,step);
    }
    return -1;
} 
