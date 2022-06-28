Problem Description: https://leetcode.com/problems/remove-duplicates-from-sorted-list/
Time Complexity: o(n)
Space Complexity: o(1)

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp=head;
        while(temp)
        {
            while(temp->next and temp->val==temp->next->val)
            {
                ListNode *pemp=temp->next;
                temp->next=temp->next->next;
                delete pemp;
                pemp=NULL;
            }
            temp=temp->next;
        }
        return head;
        
    }
};
