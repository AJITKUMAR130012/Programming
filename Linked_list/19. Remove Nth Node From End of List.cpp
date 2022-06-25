Problem Description: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
Time Complexity: o(n)
Space Complexity: o(1)
  
  class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cn=0;
        ListNode *cur=head;
        while(cur)
        {
            cn++;
            cur=cur->next;
        }
        if(n==cn)
        {
            ListNode *temp=head;
          //  free(temp);
            
            head=head->next;
            delete temp;
            return head;
        }
        n=cn-n;
        cur=head;
        while(--n)
        {
            cur=cur->next;
        }
        ListNode *temp=cur->next;
        cur->next=temp->next;
     //   free(temp);
        delete temp;
        return head;
        
    }
};
