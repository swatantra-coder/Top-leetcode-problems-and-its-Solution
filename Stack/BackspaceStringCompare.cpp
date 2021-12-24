// 844. Backspace String Compare

bool backspaceCompare(string s, string t) 
    {   stack<char> S1,S2;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='#')
            {
                if(S1.size()==0)
                    continue;
                else
                    S1.pop();
            }
            else
                S1.push(s[i]);
        }
     
        for(int i=0;i<t.length();i++)
        {
            if(t[i]=='#')
            {
                if(S2.size()==0)
                    continue;
                else
                    S2.pop();
            }
            else
                S2.push(t[i]);
        }
       if(S1==S2)
          return true;
        
         return false;  
           
    }
