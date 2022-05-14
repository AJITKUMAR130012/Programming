Problem Description: https://practice.geeksforgeeks.org/problems/twice-counter4236/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Map&sortBy=submissions#
Time Complexity: o(nlogn) --traversing the list of string and as we taken map. so time complexity would be o(nlogn)
Space Complexity: o(n)   -->space taken by map
  
   int countWords(string list[], int n)
        {
           //code here.
           int ans=0;
           unordered_map<string,int> mp;
           for(int i=0;i<n;i++)
           {
               mp[list[i]]++;
           }
           for(auto c: mp)
           {
               if(c.second==2)
                   ans++;
           }
           return ans;
        }
