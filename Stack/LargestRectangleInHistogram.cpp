//84. Largest Rectangle in Histogram



int largestRectangleArea(vector<int>& heights) 
    {   
        int n=heights.size();
        stack<pair<int, int>> s1,s2;
        vector<int> left,right;
        int pseudoIndex=-1;
        
        int pseudoIndex1=n;
        
        // store the index of nearest greatest left 
        
        for(int i=0;i<n;i++)
        {
            if(s1.size()==0)
            {
                left.push_back(pseudoIndex);
            }
            
            else if(s1.size() > 0 && s1.top().first < heights[i])
            {    
                left.push_back(s1.top().second);
            }
            
            else if(s1.size()>0 && s1.top().first >= heights[i])
            {
                while(s1.size()>0 && s1.top().first >= heights[i])
                {
                    s1.pop();
                }
                if(s1.size()==0)
                {
                    left.push_back(pseudoIndex);
                }
                else
                {
                    left.push_back(s1.top().second);
                }
            }
            s1.push({heights[i],i});
            
        }
        
         // store the index of nearest greatest right
        
        
        for(int i=n-1;i>=0;i--)
        {
            if(s2.size()==0)
            {
                right.push_back(pseudoIndex1);
            }
            
            else if(s2.size() > 0 && s2.top().first < heights[i])
            {
                right.push_back(s2.top().second);
            }
            
            else if(s2.size() > 0 && s2.top().first >= heights[i])
            {
                while(s2.size() > 0 && s2.top().first >= heights[i])
                {
                    s2.pop();
                }
                if(s2.size()==0)
                {
                    right.push_back(pseudoIndex1);
                }
                else
                {
                    right.push_back(s2.top().second);
                }
            }
            s2.push({heights[i],i});
            
        }
        reverse(right.begin(),right.end());
        
        // now we need to calculate width
        
        vector<int> width;
        for(int i=0;i<n;i++)
        {
            width.push_back(right[i]-left[i]-1);
        }
        
        // now we will calculate area
        
        vector<int> area;
        for(int i=0;i<n;i++)
        {
            area.push_back(heights[i]*width[i]);
        }
        
        int max=area[0];
        for(int i=1;i<n;i++)
        {
            if(max<=area[i])
            {
                max=area[i];
            }
        }
        return max;   
    } 
