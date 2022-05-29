Problem Description: https://practice.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1#
Time Complexity: O(n)
Space Complexity: o(n)
  
  
  	string removeDuplicates(string str) {
	    // code here
	    string ans="";
	    map<int,int> m;
	    for(int i=0;i<str.length();i++)
	    {
	        m[str[i]]++;
	    }
	    for(auto c:str)
	    {
	        if(m.find(c)!=m.end())
	        {
	            ans+=string(1,c);
	            m.erase(c);
	        }
	    }
	    return ans;
	}
