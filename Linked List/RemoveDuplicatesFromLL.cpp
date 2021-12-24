// 83. Remove Duplicates from Sorted List

ListNode* deleteDuplicates(ListNode* head) 
    {  
        ListNode* temp=head;       // creat temporary node which traverse 
        while(temp!=NULL)
        {
             if(temp->next and temp->val == temp->next->val) //check wheather the node is equal to next node or not
            {
                
                temp->next=temp->next->next;     // point the present node to the next of next node
            }
            else
            {
                temp=temp->next;                // else update the temp node
            }
        }
        delete(temp);
        
        return head;
        
    }
