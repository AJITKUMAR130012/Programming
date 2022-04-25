Problem Description: https://practice.geeksforgeeks.org/problems/anagram-1587115620/1
Time complexity: o(max(n1,n2))   n1=length of first string and n2= length of second string
Space Complexity: o(max(n1,n2))  This approach is using hash map

 bool isAnagram(string a, string b){
        
        // Your code here
        map<char,int> m;
        for(int i=0;i<a.length();i++)
        {
            m[a[i]]++;
        }
        for(int i=0;i<b.length();i++)
        {
            if(m.find(b[i])==m.end()) return false;
            else m[b[i]]--;
        }
        for(auto c:m)
        {
            if(c.second!=0) return false;
        }
        return true;
        
    }
  
  
