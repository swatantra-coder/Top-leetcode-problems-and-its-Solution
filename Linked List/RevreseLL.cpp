// 206. Reverse Linked List

ListNode* reverseList(ListNode* head) 
{
    //  base case if Linked list is NULL or single
        
    if(head==NULL or head->next==NULL)
          return head;
        
    // for other case 
    ListNode* tempHead=reverseList(head->next);  // recursive call to LinkedList except first node i.e head
    head->next->next=head; //changing the head->next pointer to the head of the LinkedList
    head->next=NULL;       // head->next pointer to the NULL as it will be last node 
        
        return tempHead;
        
}


ListNode* current=head;
ListNode* prev=NULL;
ListNode* next=NULL;
while(current!=NULL)
{    // Store next
    next=current->next;
    current->next=prev;
    // Move pointers one position ahead.
    prev=current;
    current=next;
}
head=prev;
