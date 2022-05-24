Problem Description: https://practice.geeksforgeeks.org/problems/shortest-path-between-cities/1/?page=1&difficulty[]=1&category[]=Heap&sortBy=submissions#
Time Complexity: o(n)
Space Complexity: o(log(max(m,n))


nt shortestPath( int x, int y){ 
        // code here 
        set<int> s1,s2;
        int m,n;
        m=x;n=y;
      
        while(m!=0)
        {
            s1.insert(m);
            m/=2;
        }
         while(n!=0)
        {
            s2.insert(n);
            n/=2;
        }
        set<int> s3;
      
       set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),std::inserter(s3, s3.begin()));
       int z=INT_MIN;
       for(auto c: s3)
        {
            z=max(c,z);
      
        }
   
        int ans=int(log(x)/log(2))+int(log(y)/log(2))-2*int((log(z)/log(2)));
       
        
        return ans;
    }
