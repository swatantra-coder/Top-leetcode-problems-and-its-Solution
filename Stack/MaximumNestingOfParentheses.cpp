// 1614. Maximum Nesting Depth of the Parentheses

 int maxDepth(string s) 
    {
        int mx=0,i=0,n=s.size(),count=0;
        while(count>-1 and i<n)
        {
            if(s[i]=='(')
                count++;
            else if(s[i]==')')
                count--;
             i++;
            mx=max(mx,count);
           
           
        }
        if(mx==-1)
            return false;
        return mx;
    }
