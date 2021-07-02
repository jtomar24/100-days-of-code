class Solution{
    public:
    //Function to convert a binary tree into its mirror tree.
    void mirror(Node* node)
    {
     // code here
     if(node!=NULL)
     {            
         mirror(node->left);
         mirror(node->right);
         //cout<<(node->data)<<" ";
         swap(node->left,node->right);

     }
     
    }
};
