// 1108. Defanging an IP Address

string defangIPaddr(string address) 
    {  
        string s;
        for(int i=0;i<address.length();i++)
        {
            if(address[i]=='.')
            {   s.push_back('[');
                s.push_back('.');
                s.push_back(']');
            }
            else
            {
                s.push_back(address[i]);
            }
        }
        return s;
        
    }
    
