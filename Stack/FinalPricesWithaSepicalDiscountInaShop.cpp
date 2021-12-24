// 1475. Final Prices With a Special Discount in a Shop

vector<int> finalPrices(vector<int>& prices) 
    {
        vector<int> v;
        stack<int> s;
        int n=prices.size();
        
        for(int i=n-1;i>=0;i--)
        {
            if(s.size()==0)
            {
                v.push_back(0);
                
            }
            
            else if(s.size()>0 and s.top()<prices[i])
            {
                v.push_back(s.top());
            }
            else if(s.size()>0 and s.top()==prices[i])
            {
                v.push_back(s.top());
            }
            else if(s.size()>0 and s.top()>prices[i])
            {
                while(s.size()>0 and s.top()>prices[i])
                {
                    s.pop();
                }
                if(s.size()==0)
                {
                    v.push_back(0);
                }
                else
                {
                    v.push_back(s.top());
                }
            }
            s.push(prices[i]);
        }
        
        reverse(v.begin(),v.end());
        
        vector<int> soap;
        for(int i=0;i<n;i++)
        {
            soap.push_back(prices[i]-v[i]);
        }
       return soap; 
    }
