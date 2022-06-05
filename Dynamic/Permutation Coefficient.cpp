Problem Description: https://www.codingninjas.com/codestudio/problems/permutationcoefficient_1214975?leftPanelTab=1
Time Complexity: o(n-k)
space complexity: o(1)
  
  int P(int n, int k) {
	// Write your code here.
    long long ans=1;
    int mod=1e9 + 7;
   for(int i=0;i<k;i++)
   {
       ans=((ans%mod)*(n-i)%mod)%mod;
   }
    return ans;
}
