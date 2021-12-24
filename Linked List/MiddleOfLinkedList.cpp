// 876. Middle of the Linked List

ListNode* middleNode(ListNode* head) 
    {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL and fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
