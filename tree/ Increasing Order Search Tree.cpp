
// Given the root of a binary search tree, rearrange the tree in in-order so that the leftmost node in the tree is now the root of the tree, and every node has no left child and only one right child.



TreeNode* Mroot=NULL;
    TreeNode * tail;
    
    void inOrder(TreeNode*root)
    {
        if(root==NULL)return;
        
        inOrder(root->left);
         TreeNode* temp= new TreeNode(root->val);
                if(Mroot==NULL)
            {
                Mroot=temp;
                tail=Mroot;
            }
            else
            {
                tail->right=temp;
                tail=temp;
            }
        inOrder(root->right);
    }
    
    
    TreeNode* increasingBST(TreeNode* root) {
        
            inOrder(root);
        
        return Mroot;
    }
    
    