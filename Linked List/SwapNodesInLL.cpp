// 24. Swap Nodes in Pairs

 ListNode* swapPairs(ListNode* head) 
    {
        ListNode* current=head;
        ListNode* previous=NULL;
        ListNode* temp;
        
        if(head==NULL)
            return NULL;
        
        int count=1;
        
        while(current!=NULL and count<=2)
        {
             temp=current->next;        // Stor the next element in temp
             current->next=previous;    // point pointer of current node to previous
             previous=current;          // update previous
             current=temp;              // update current
             count++;
        }
        
        if(temp!=NULL)
            head->next=swapPairs(temp);
        
        return previous;
        
    }
