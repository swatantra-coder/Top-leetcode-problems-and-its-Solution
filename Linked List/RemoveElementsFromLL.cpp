// 203. Remove Linked List Elements

 ListNode* removeElements(ListNode* head, int val) {
        while(head && head -> val == val)
            head = head -> next;
        if(!head)
            return NULL;
        head -> next = removeElements(head -> next, val);
        return head;
    }
