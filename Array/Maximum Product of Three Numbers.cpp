Problem Description:  https://leetcode.com/problems/maximum-product-of-three-numbers/
Time Complexity: o(n)
Space Complexity: o(1)
  
  
  int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        int max1=INT_MIN,max2=INT_MIN,max3=INT_MIN,min1=INT_MAX,min2=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>max1)
            {
                max3=max2;
                max2=max1;
                max1=nums[i];
            }
            else if(nums[i]>max2)
            {
                max3=max2;
                max2=nums[i];
            }
            else if(nums[i]>max3)
            {
                max3=nums[i];
            }
            if(nums[i]<min1)
            {
                min2=min1;
                min1=nums[i];
            }
            else if(nums[i]<min2)
            {
                min2=nums[i];
            }
        }
        cout<<max1<<max2<<max3<<" ";
        cout<<min1<<min2<<" "; 
        return max(max1*max2*max3,min2*min1*max1);
        
    }
