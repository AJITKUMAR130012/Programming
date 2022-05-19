Problem Statement: https://practice.geeksforgeeks.org/problems/b6b608d4eb1c45f2b5cace77c4914f302ff0f80d/1/#
Time Complexity: o(nlogn)
Space Complexity: o(1)
  
   long long smallestpositive(vector<long long> array, int n)
    { 
        // code here 
        long long p=1;
        sort(array.begin(),array.end());
        for(int i=0;i<n;i++)
        {
            if(p>=array[i])
            {
                p+=array[i];
            }
            else
            {
                break;
            }
        }
        return p;
    } 
