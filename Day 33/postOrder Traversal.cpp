    void post(Node* root,vector<int> &v)
    {   if(!root)
     {
        return;
     }
        post(root->left,v);
        post(root->right,v);
        v.push_back(root->data);
        
    }
    
    vector<int> postOrder(Node* root) {
        // Your code here
        vector<int> v;
        post(root,v);
        return v;
    }
