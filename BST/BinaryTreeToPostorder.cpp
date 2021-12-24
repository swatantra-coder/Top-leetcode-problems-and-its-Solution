// 145. Binary Tree Postorder Traversal

vector<int> postorderTraversal(TreeNode* root) {
        
        // postorder Traversal left -> right -> root;
        
            
        vector<int> v;
        
        if(root==NULL)    // root is null then return the empty vector v
            return v;
        
        stack<TreeNode*> s,s2;   // creat two stack in which we will store the node 
        
        s.push(root);           // intially we will push the root in the stack
        
        while(!s.empty())         // while loop will rum till it will become empty
        {
            root=s.top();          // in root we will assign top of the stack
            s.pop();               // delete the top  of stack s
            s2.push(root);         // push the deleted value in stack s2
            
            if(root->left != NULL)   // check weather the left of the root is null or not  
            {
                s.push(root->left);    // if root left is not null then push the right in stack s
            }
            if(root->right != NULL)   // another case in which we will check the right of the root
            {
                s.push(root->right);    // if yes then push the root left in the stack s
            }
        }
        
        // now will copy all the root->val in vector v
        
        while(!s2.empty()) 
        {
            v.push_back(s2.top()->val);   
            s2.pop();
        }
        return v;
        
    }
