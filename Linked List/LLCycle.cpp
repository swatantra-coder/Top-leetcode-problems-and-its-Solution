// 141. Linked List Cycle

   bool hasCycle(ListNode *head) 
    {   int k;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL and fast->next!=NULL)
        {
             slow=slow->next;
             fast=fast->next->next;
             if(slow==fast)
                 return true;
         }
        
     
     
          return false;
    }
