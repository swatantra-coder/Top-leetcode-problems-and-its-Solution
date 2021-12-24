// 222. Count Complete Tree Nodes

int countNodes(TreeNode* root) 
    {
        if(root == NULL)
            return 0;
        
        return 1+countNodes(root->left)+countNodes(root->right);
        
    }
