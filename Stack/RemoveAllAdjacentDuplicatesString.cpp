// 1047. Remove All Adjacent Duplicates In String

  string removeDuplicates(string s) 
    {   
        if(s.length()==1)
             return s;
     
        stack<char> S;
        S.push(s[0]);
        string s2;
        int n=s.length();
        for(int i=1;i<n;i++)
        {
            if(S.size()>0 and S.top()==s[i])
                S.pop();
            else 
            {
                S.push(s[i]);
            }
             
            
              
        }
     
        int k=S.size();
        while(!S.empty())
        {
            s2.push_back(S.top());
            S.pop();
        }
        int h=s2.length();
        for(int i=0;i<h/2;i++)
        {
            swap(s2[i],s2[k-1-i]);
        }
        return s2;
        
    }
