// A binary tree is univalued if every node in the tree has the same value.

// Return true if and only if the given tree is univalued.


bool func(TreeNode* root,int value)
        {
         if(root==NULL)return true;
           if(root->val!=value)return false;
        bool l =func(root->left,root->val);
        bool r=func(root->right,root->val);
           return l&r;
        }
    
    bool isUnivalTree(TreeNode* root) {
       
       if(root==NULL)return true;
    return func(root,root->val);
        
    }