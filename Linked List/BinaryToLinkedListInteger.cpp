// 1290. Convert Binary Number in a Linked List to Integer

int getDecimalValue(ListNode* head) 
    {
        long long k=0;   
        int i=0;
        ListNode *newNode=head;
        while(newNode!=NULL)             // to calculate the length of Linked list
        {
            newNode=newNode->next;
            i++;
        }
            
        ListNode *temp=head;
        while(temp!=NULL and i>=0)               //iterate to every node
        {
             k=k+(temp->val)*pow(2,(i-1));         // formula to calculate decimal integer
            
            temp=temp->next;
            i=i-1;
      
         
        }
        return k;
    }
