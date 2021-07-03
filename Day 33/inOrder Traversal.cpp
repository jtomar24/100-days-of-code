class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    
    void in(Node* root,vector<int> &v)
    {   if(!root)
     {
        return;
     }
        in(root->left,v);
        v.push_back(root->data);
        in(root->right,v);
        
        
    }
    
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> v;
        in(root,v);
        return v;
    }
};
