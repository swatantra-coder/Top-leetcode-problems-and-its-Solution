
// 450. Delete Node in a BST

 TreeNode* deleteNode(TreeNode* root, int key) 
    {
       if(root==NULL)
           return NULL;
        
        if(root->val == key)
        {   
            if (root->left == NULL && root->right == NULL) 
            {
				delete root;
				return NULL;
			} 
            
            else if (root->left == NULL) 
            {
				TreeNode* temp = root->right;
				root->right = NULL;
				delete root;
				return temp;
			} 
            
            else if (root->right == NULL) 
            {
				TreeNode* temp = root->left;
				root->left = NULL;
				delete root;
				return temp; 
			}
            
            else
            {
                TreeNode* minNode = root->right;
                
				while (minNode->left != NULL) 
                {
					minNode = minNode->left;
				}
                
				int rightMin = minNode->val;
				root->val = rightMin;
				root->right = deleteNode(root->right,rightMin);
                
				return root;
                
            }
        }
        
        if(root->val > key)
        {
            root->left=deleteNode(root->left,key);
            return root;
        }
        
        if(root->val < key)
        {
            root->right=deleteNode(root->right,key);
            return root;
        }
        
       return root;
    }
