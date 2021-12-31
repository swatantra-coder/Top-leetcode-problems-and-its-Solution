// Number of Substrings Containing All Three Characters
// Leetcode: https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/



  int numberOfSubstrings(string s) 
    {
        unordered_map<char, int> map;
        int n=s.length();
        int i=0,j=0,count=0;
        int k=3;
      
        while(j<n)
        {   
            map[s[j]]++;
            
            if(map.size()<k)
                j++;
            
            else if(map.size()==k)
            {
                while(map.size()==k)
                {
                    count++;
                    count+=n-(j+1);
                    map[s[i]]--;
                    if(map[s[i]]==0)
                        map.erase(s[i]);
                    i++;
                }
                
                j++;
            }
          
        }
        return count;
        
    }
