Problem Description: https://practice.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1
Space Complexity: o(n)
Time complexity: o(n) 
Space Complexity: o(1)


   bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.length()!=s2.length()) return false;
        string temp=s1+s1;
        if(temp.find(s2)!=string::npos) return true;
        return false;
    }
