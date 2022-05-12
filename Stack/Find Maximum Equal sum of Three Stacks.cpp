Problem Description: https://practice.geeksforgeeks.org/problems/find-maximum-equal-sum-of-three-stacks/1/?page=2&difficulty[]=1&category[]=Stack&sortBy=submissions#
Time complexity: o(n)
Space Complexity: o(n)
  
  int maxEqualSum(int n1,int n2,int n3,vector<int> &v1,vector<int> &v2,vector<int> &v3){
        stack<long long> s1,s2,s3;
        long long sum1=0,sum2=0,sum3=0;
        for(int i=n1-1;i>=0;i--)
        {
            s1.push(v1[i]);
            sum1+=v1[i];
        }
        for(int i=n2-1;i>=0;i--)
        {
            s2.push(v2[i]);
            sum2+=v2[i];
        }
        for(int i=n3-1;i>=0;i--)
        {
            s3.push(v3[i]);
            sum3+=v3[i];
        }
        while(sum1!=0 and sum2!=0 and sum3!=0)
        {
            if(sum1==sum2 and sum2==sum3)
            {
                return sum1;
            }
            if(sum2>=sum1 and sum2>=sum3)
            {
                sum2-=s2.top();
                s2.pop();
            }
            else if(sum3>=sum2 and sum3>=sum1)
            {
                sum3-=s3.top();
                s3.pop();
            }
            else 
            {
                sum1-=s1.top();
                s1.pop();
            }
        }
        return 0;
        
    }
