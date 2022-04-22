Problem Statement:https://practice.geeksforgeeks.org/problems/check-for-binary/1/?page=1&difficulty[]=-2&category[]=Strings&sortBy=submissions#
Time Complexity: o(n)
Space Complexity: o(1)
  
  bool isBinary(string str)
{
   // Your code here
   int n=str.length();
   for(int i=0;i<n;i++)
   {
       if(str[i]!=48 and str[i]!=49) return false;
   }
   return true;
}
  
