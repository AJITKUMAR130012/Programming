Problem Description: https://leetcode.com/problems/linked-list-cycle/
Time Complexity: o(n)
Space Complexity: o(1)
  
  class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head) return false;
        ListNode *slow=head,*fast=head;
        do
        {
            slow=slow->next;
            if(fast->next)
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        while(fast and fast->next);
        return false;
        
    }
};
