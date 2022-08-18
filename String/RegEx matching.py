Problem Description: https://practice.geeksforgeeks.org/problems/-regex-matching1145/1
Time Complexity: o(n)
Space Complexity: o(1)
  
import re
class Solution:
    def isPatternPresent(self, S , P):
        # code here 
        x=re.findall(P,S)
        if x:
            return 1
        else:
            return 0
