Problem Statement: https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1/#
Time Complexity: o(n!*n)
Space Complexity: o(n)
  
  void permutation(string inp,string out,vector<string> &v)
	  {
	      if(inp.length()==0)
	      {
	          v.push_back(out);
	          return;
	      }
	      for(int i=0;i<inp.length();i++)
	      {
	          string op1=out;
	          string m=inp;
	          op1+=string(1,inp[i]);
	          m.erase(m.begin()+i);
	          permutation(m,op1,v);
	          
	      }
	  }
	
	
	
		vector<string>find_permutation(string S)
		{
		    // Code here 
		    vector<string> ans;
		    string out="";
		    permutation(S,out,ans);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
