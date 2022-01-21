  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode *l3=new ListNode(0);  //created new linked list in which we will store the final value
        ListNode *curr=l3;  
        
        ListNode *p=l1;
        ListNode *q=l2;
        
        int carry=0;   // we will store the carry of the add
        
        while(p != NULL || q!= NULL)  
        {
            int x=(p!=NULL) ? p->val :0;
            int y=(q!=NULL) ? q->val :0;
            
            int sum=carry+x+y;   // add all particular value
            
            carry=sum/10;         // check carry 
            curr->next=new ListNode(sum%10);  // current
            
            curr=curr->next;
            
            if(p!=NULL) p=p->next;
            if(q!=NULL) q=q->next;
        }
        if(carry>0)
        {
            curr->next=new ListNode(carry);
        }
        return l3->next;
    }
