// 237. Delete Node in a Linked List

  void deleteNode(ListNode* node) 
    {  
        ListNode *temp = node->next;   // storing the value of node pointer into temp node
        
        node->val=node->next->val;      // changing the node value to its next node value
        
        node->next=temp->next;         // changing the next pointer of node to its next pointer i.e temp
     
         

    }
