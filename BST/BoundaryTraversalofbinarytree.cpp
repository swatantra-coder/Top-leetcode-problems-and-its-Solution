 bool isLeaf(Node * root) 
    {
        return !root -> left && !root -> right;
    }
    void addLeftBoundary(Node* root,vector<int>& ans)
    {
        Node* current=root->left;
        while(current)
        {
            if(!isLeaf(current))
               ans.push_back(current->data);
            if(current->left)
               current=current->left;
            else
               current=current->right;
        }
    }
    void addLeave(Node* root,vector<int>& ans)
    {
        if(isLeaf(root))
        {
            ans.push_back(root->data);
            return;
        }
        if(root->left)
           addLeave(root->left,ans);
        if(root->right)
           addLeave(root->right,ans);
    }
    void addRightBoundary(Node* root,vector<int>& ans)
    {
        Node* current=root->right;
        vector<int> temp;
        
        while(current)
        {
            if(!isLeaf(current))
                temp.push_back(current->data);
            if(current->right)
                current=current->right;
            else
                current=current->left;
        }
        for(int i=temp.size()-1;i>=0;i++)
        {
            ans.push_back(temp[i]);
        }
    }
    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        if(root==NULL)
            return ans;
        if(!isLeaf(root))
            ans.push_back(root->data);
        addLeftBoundary(root,ans);
        addLeave(root,ans);
        addRightBoundary(root,ans);
        
        
        return ans;
        
    }
