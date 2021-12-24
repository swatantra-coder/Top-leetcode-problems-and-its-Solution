// 700. Search in a Binary Search Tree

 TreeNode* searchBST(TreeNode* root, int val) 
    {   int key=val;
        TreeNode* r;
        if(root==NULL)
            return NULL;
     
        else if(root->val==key)
            return root;
     
        else if(root->val>key)
            searchBST(root->left,key);
     
        else 
            searchBST(root->right,key);
     
     return r; 
    }
