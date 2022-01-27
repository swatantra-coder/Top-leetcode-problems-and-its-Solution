queue<int> q1,q2;
    void push(int x) 
    {
        q2.push(x);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
        
    }
    
    int pop() 
    {
       int ans;
        if(q1.empty()) 
           ans=-1;
        else{
            ans=q1.front();
            q1.pop();
        }
        return ans;
    }
    
    int top() 
    {
        return q1.front();
        
    }
    
    bool empty() 
    {
        if(q1.empty()) 
            return true;
        return false;
    }
