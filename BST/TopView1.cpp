 vector<int> topView(Node *root)
    {
       vector<int> ans;  // creat vector in which we will store top view element
       if(root==NULL)
           return ans;   // simply return empty vector if root is null
       map<int,int> mp;   // creat map in which we store line as a key and corresponding node will its value 
       
       queue<pair<Node*,int>>q;  // we will use queue data structure in which first Node and its corresponding line on which it lies 
       q.push({root,0});   // Initially we will store the root and assign line zero to 
       
       while(!q.empty())   // initiate queue and run it untill become empty
       {
           auto it=q.front();    // store the front of the queue in auto variable
           
           q.pop();      // delete it 
           Node* node=it.first;  // creat new variable node and store the first value of it 
           int line=it.second;    // and second will be its line 
           if(mp.find(line)==mp.end())   // now find that particular line is present in the map or not if not then insert it otherwise escape 
               mp[line]=node->data;
           if(node->left!=NULL)   // now move to its left side and inserting accordingly
               q.push({node->left,line-1});
           if(node->right!=NULL)   // similary for the right nodes and insert accordingly
               q.push({node->right,line+1});
        
       }
       
       for(auto it:mp)
       {
           ans.push_back(it.second);   // now push that particular 
       }
       
       
       return ans;
    }
