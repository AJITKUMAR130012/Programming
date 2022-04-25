Problem Statement: https://practice.geeksforgeeks.org/problems/anagram-of-string/1/?page=1&difficulty[]=-1&status[]=unsolved&category[]=Strings&sortBy=submissions#
Time Complexity: o(n)
Space Complexity: o(1)
  
  int remAnagram(string s1, string s2)
{
// Your code goes here
   vector<int> v(27,0);
   for(int i=0;i<s1.length();i++)
   {
       v[s1[i]-'a']++;
   }
   for(int i=0;i<s2.length();i++)
   {
       v[s2[i]-'a']--;
   }
   int ans=0;
   for(int i=0;i<26;i++)
   {
       ans+=(abs(v[i]));
   }
     return ans; 
}
