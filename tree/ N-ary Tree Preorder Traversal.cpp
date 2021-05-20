// Given the root of an n-ary tree, return the preorder traversal of its nodes' values.

// Nary-Tree input serialization is represented in their level order traversal. Each group of children is separated by the null value (See examples)


 void preOrderHelper(Node* root,vector<int>&v)
    {
        v.push_back(root->val);
            
            for(int i=0;i<root->children.size();i++)
            {
                    preOrderHelper(root->children[i],v);
            }
            
    }

    vector<int> preorder(Node* root) {
        
    
            vector<int>v;
        if(root==NULL)return v;
        preOrderHelper(root,v);
            return v;
        
        
    }