// 2095. Delete the Middle Node of a Linked List


 ListNode* deleteMiddle(ListNode* head) 
    {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* previous=NULL;
        ListNode* temp;
        
        if(head==NULL or head->next==NULL)       // return null when only one node present in linked list
            return NULL;
        
        
        while(fast!=NULL and fast->next!=NULL)
        {   
            previous=slow;                           // previous pointer store the node which is present befor Middle node
            slow=slow->next;
            fast=fast->next->next;
        }
        
        temp=slow->next;
        previous->next=temp;          // delete middle node
       
        
        
        return head;
    }
