// Given the root node of a binary search tree and two integers low and high, return the sum of values of all nodes with a value in the inclusive range [low, high].


int ans =0;

    int rangeSumBST(TreeNode* root, int low, int high) {
     
        
        if(root==NULL) return 0;
        
        rangeSumBST(root->left, low, high);
        rangeSumBST(root->right, low, high);
        
        if(root->val>=low&&root->val<=high)ans=ans+root->val;
        
        return ans;
        
        
        
    }


//  We can also use this queue method if don't want to use recurssion.

// int rangeSumBST(TreeNode* root, int low, int high) {
    //     int sum = 0;
    //     if(root == NULL)
    //         return sum;
        
    //     queue<TreeNode*> q;
        
    //     q.push(root);
        
    //     while(!q.empty())
    //     {
    //         TreeNode *root = q.front();
    //         q.pop();
            
    //         if( (root->val >= low) && (root->val <= high) )
    //         {
    //             sum += root->val;
    //         }
            
    //         if(root->left)
    //             q.push(root->left);
            
    //         if(root->right)
    //             q.push(root->right);
    //     }
        
        
    //     return sum;
        
    // }   