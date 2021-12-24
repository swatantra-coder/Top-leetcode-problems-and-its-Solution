// 155. Min Stack

/** initialize your data structure here. */
     stack<long long int> s;
      long long int mn;
    MinStack() 
    {
       
    }
    
    void push(int val) {
         
        long long int x=val;
        if(s.size()==0)
            {
                s.push(x);
                mn=x;
            }
            else 
            {
                if(x>=mn)
                    s.push(x);
                else if(x<=mn)
                {
                    s.push(2*x-mn);
                    mn=x;
                }
            }
        
    }
    
    void pop() {
        if(s.size()==0)
            return;
        else{
            long long int z=s.top();
            if(z<mn)
                mn=2*mn-z;
        }
            s.pop();
            
        }
    
    
    int top() {
    
            if(s.size()==0)
                return -1;
             else 
                 return (s.top()>=mn?s.top():mn);
        
        }
    
    int getMin() {
       if(s.size()==0)
           return -1;
        return mn;
    }
