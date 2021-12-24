//938. Range Sum of BST

int sum=0;
    int rangeSumBST(TreeNode* root, int low, int high) 
    {
       
        // check weather the present root is null or not
        if(!root)
            return 0;
        
        if(root->val >= low and root->val <= high)
        {
            sum=sum+root->val;
        }
        
        rangeSumBST(root->left , low, high);
        rangeSumBST(root->right, low, high);
            
       
       return sum;
    }
