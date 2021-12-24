//144. Binary Tree Preorder Traversal

 vector<int> v;
     vector<int> preorderTraversal(TreeNode* root) {
         // preorder root-> left-> right
         
         if(root==NULL)
             return v;
         
         v.push_back(root->val);
         
       preorderTraversal(root->left);
       preorderTraversal(root->right);
         
         return v;
        
    }
