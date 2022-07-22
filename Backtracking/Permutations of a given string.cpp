Problem Description: https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1
Time Complexity: o(n!*n)
Space Complexity: o(n)
  
class Solution
{
	public:
	    void fun(string inp,string out,set<string> &ans)
	    {
	        if(inp.length()==0)
	        {
	            ans.insert(out);
	            return;
	        }
	        for(int i=0;i<inp.length();i++)
	        {
	            string op=out,in=inp;
	            op.push_back(in[i]);
	            in.erase(in.begin()+i);
	            fun(in,op,ans);
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    set<string> ans;
		    vector<string> v;
		    fun(S,"",ans);
		    for(auto c: ans)
		    {
		        v.push_back(c);
		    }
		    return v;
		}
};
