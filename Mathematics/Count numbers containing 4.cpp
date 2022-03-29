Problem Des: Count numbers containing 4
  Time Complexity:o(nlogn)
  Space Complexity: o(1)
  
      int countNumberswith4(int N) {
        // code here
        int ans=0;
        for(int i=1;i<=N;i++)
        {
            int k=i;
            while(k)
            {
                int rem=k%10;
                if(rem==4) 
                {
                    ans++;
                    break;
                }
                k=k/10;
            }
        }
        return ans;
    }
