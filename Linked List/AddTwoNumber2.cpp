 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* l3 = NULL;
       // ListNode* first
        stack<int> s1,s2;
        while(l1!=NULL)
       {
           s1.push(l1->val);
           l1=l1->next;
       }
       while(l2!=NULL)
       {
           s2.push(l2->val);
           l2=l2->next;
       }
       
       int carry=0,a,b;
       
       while(!s1.empty() || !s2.empty() || carry)
       {
           if(!s1.empty())
           {
               a=s1.top();
               s1.pop();
           }
           else
           {
               a=0;
           }
           
           if(!s2.empty())
           {
               b=s2.top();
               s2.pop();
           }
           else
           {
               b=0;
           }
           
           int k=carry+a+b;
           ListNode* temp=new ListNode(k%10);
           temp->next=l3;
           l3=temp;
           carry=k/10;
       }
        
        
      return l3;
        
        
        
    }
