/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left;
     Node* right;
}; */

/* Computes the number of nodes in a tree. */
int getSize(Node* node)
{
   // Your code here
   if(node==NULL)
   {
       return 0;
   }
   else
   {
       return 1+getSize(node->right)+getSize(node->left);
   }
}
