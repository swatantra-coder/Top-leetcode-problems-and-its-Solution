  ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* temp=head;       // make temp node and assigne head to it
        int l=0;                   // declare l to calculate length of Linked list
        
        //Calculation of length of linkedlist
        while(temp!=NULL)
        {
            temp=temp->next;     
            l++;
        }
        
        temp=head;          // reassign head to temp because we will use it further
        int k=l-n;          // forward node of the linedlist to be deleted 
        int i=0; 
        ListNode* previous=NULL;   
        
        // if linkedlist is of size one
        if(k==0)
        {
           head=head->next;
            return head;
        }
        
        // iterating every element and reach to node that should be delete 
        // store the kth node into temp and its previous node to previous 
        
        while(head!=NULL and i<k )    
        {   previous=temp;
            temp=temp->next;
            i++;
        }
        previous->next=temp->next;    // changin the pointer of previous to the next of kth node 
       
        
        return head;
      
        
    }
