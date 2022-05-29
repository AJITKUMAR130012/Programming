Problem Description: https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1#
Time Complexity: o(n^2)
Space Complexity: o(Number of digit in result)
  
  
   vector<int> factorial(int N){
        // code here
        vector<int> v(1,1);
       // int m=1e9;
        for(int i=2;i<=N;i++)
        {
            long long c=0;
            for(int j=0;j<v.size();j++)
            {
                long long x=(v[j]*i);
                v[j]=(x+c)%10;
                c=(x+c)/10;
                
                if(v.size()-1==j and c!=0)
                {
                    while(c!=0)
                    {
                        v.push_back(c%10);
                        c=c/10;
                    }
                    break;
                }
              
            }
           
        }
        reverse(v.begin(),v.end());
        return v;
    }
