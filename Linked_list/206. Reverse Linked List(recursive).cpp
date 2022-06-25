Problem description: https://leetcode.com/problems/reverse-linked-list/
Time Complexity: o(n)
Space Complexity: o(n)   --> space taken by the function call of stack


class Solution {
public:
    ListNode *root=NULL,*temp=NULL;
    void reverse(ListNode *head)
    {
        if(!head) return;
        reverse(head->next);
        if(!root) root=head;
        if(!temp) temp=head;
        else
        {
            temp->next=head;
            temp=temp->next;
            temp->next=NULL;
        }
    }
    ListNode* reverseList(ListNode* head) {
        
        
        reverse(head);
        return root;;
        
    }
};
