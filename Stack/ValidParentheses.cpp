// 20. Valid Parentheses

bool isValid(string s) 
    {
        stack<char> k;
        for(int i=0;i<s.length();i++)
        {
            switch(s[i])
            {
                case'(':
                case'{':
                case'[':
                k.push(s[i]);
                break;
                
                case')':
                if(k.size()!=0 and k.top()=='(')
                {
                    k.pop();
                }
                else 
                {
                    return false;
                }
                    break;
                
                case'}':
                if(k.size()!=0 and k.top()=='{')
                {
                    k.pop();
                }
                else 
                {
                    return false;
                }
                    break;
                
                case']':
                if(k.size()!=0 and k.top()=='[')
                {
                    k.pop();
                }
                else 
                {
                    return false;
                }
                    break;
            }
        }
        
        if(k.size()==0)
            return true;
        
        return false;
    }
