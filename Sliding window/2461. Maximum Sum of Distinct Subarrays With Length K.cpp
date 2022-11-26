Problem Description: https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/
Time Complexity: o(n)
Space Complexity: o(n) // space taken by map
  
  
  long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans=0,sum=0;
        int i=0,j=0,n=nums.size();
        map<int,int> m;
        while(j<n)
        {
            sum+=nums[j];
            m[nums[j]]++;
        //    if(m.find(0)!=m.end()) m.erase(0);
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k and m.size()==k)
            {
              
                ans=max(ans,sum);
            
                m[nums[i]]--;
                
                if(m[nums[i]]==0) m.erase(nums[i]);
                
                sum=sum-nums[i];
                i++;
                j++;
            }
            else if(j-i+1==k and m.size()<k)
            {
                sum-=nums[i];
                m[nums[i]]--;
                if(m[nums[i]]==0) m.erase(nums[i]);
                i++;
                j++;
            }
            
        }
        return ans;
        
    }
