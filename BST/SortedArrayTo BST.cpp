//108. Convert Sorted Array to Binary Search Tree

TreeNode* sortedArray(vector<int>&nums, int start, int end)
    {
        if(start>end)    // if start end become grater than we can say our array is empty and we need to return zero 
           return NULL;
        
        int mid=(start+end)/2;  // calculate the mid of the given array and further we will use it
        
        TreeNode* n=new TreeNode(nums[mid]);  // creat new treeNode and we will assign the mid to its root
        
        n->left=sortedArray(nums,start,mid-1);  // call the left of root with the left part of the array
        n->right=sortedArray(nums,mid+1,end);   // call the right of root with the right part of thr array
        
         return n;   // after multiple recursive call we will get our bst and return in the form of the node i.e "n"
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
         return sortedArray(nums,0,nums.size()-1); // Binary search call type function
    }
