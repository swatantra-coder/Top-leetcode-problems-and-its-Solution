// 543. Diameter of Binary Tree

 int height(TreeNode* root)
    {
        if(root == NULL)
          return 0;
        
        return 1+max(height(root->left),height(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)  // Your code here
          return 0;
        
        int op1=height(root->left)+height(root->right);
        int op2=diameterOfBinaryTree(root->right);
        int op3=diameterOfBinaryTree(root->left);
        
        return  max(op1,max(op2,op3));
    }
