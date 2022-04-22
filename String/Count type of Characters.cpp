problem Description: https://practice.geeksforgeeks.org/problems/count-type-of-characters3635/1/?page=1&difficulty[]=-2&status[]=unsolved&category[]=Strings&sortBy=submissions#
Time Complexity: o(n)
Space Complexity: o(1)


 vector <int> count (string s)
        {
            //code here.
            int l=0,d=0,m=0,u=0;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]>=65 and s[i]<=90) u++;
                else if(s[i]>=97 and s[i]<=122) l++;
                else if(s[i]>=48 and s[i]<=57) d++;
                else m++;
            }
            vector<int> v;
            v.push_back(u);
            v.push_back(l);
            v.push_back(d);
            v.push_back(m);
            return v;
        }
