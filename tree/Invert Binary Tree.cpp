// Given the root of a binary tree, invert the tree, and return its root.



TreeNode *temp;
    TreeNode* invertTree(TreeNode* root) {
        
        if(root==NULL)return root;
        invertTree(root->left);
        invertTree(root->right);
        temp = root->left;
        root->left  = root->right;
        root->right =temp;
        return root;
      
        
    }
