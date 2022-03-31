Problem Description: https://practice.geeksforgeeks.org/problems/-minimum-number-of-coins4426/1#
Time Complexity: o(n)
Space Complexity: o(1)
  
  
   vector<int> minPartition(int N)
    {
        // code here
        int ans=0;
        vector<int> v;
        int div;
        while(N)
        {
            if(N==1)
            {
                v.push_back(N);
                return v;
            }
            if(N==2)
            {
                v.push_back(N);
                return v;
            }
            if(N==5)
            {
                v.push_back(N);
                return v;
            }
            if(N==10)
            {
                v.push_back(N);
                return v;
            }
            if(N==20)
            {
                v.push_back(N);
                return v;
            }
            if(N==50)
            {
                v.push_back(N);
                return v;
            }
            if(N==100)
            {
                v.push_back(N);
                return v;
            }
            if(N==200)
            {
                v.push_back(N);
                return v;
            }
            if(N==500)
            {
                v.push_back(500);
                return v;
            }
            if(N==2000)
            {
                v.push_back(N);
                return v;
            }
            if(N>2 and N<5)
            {
                div=2;
            }
            else if(N>5 and N<10)
            {
                div=5;
            }
            else if(N>10 and N<20)
            {
                div=10;
            }
            else if(N>20 and N<50)
            {
                div=20;
            }
            else if(N>50 and N<100)
            {
                div=50;
            } 
            else if(N>100 and N<200)
            {
                div=100;
            }
            else if(N>200 and N<500)
            {
                div=200;
            }
            else if(N>500 and N<2000)
            {
                div=500;
            }
            else
            {
                div=2000;
            }
            int x=N/div;
            while(x--)
            {
                v.push_back(div);
            }
            N=N%div;
        }
    }
