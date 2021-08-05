void levelOrder(Node* node)
{
  queue<node*> q;
  if(node==NULL)
    return;
   else
  {
   q.push(node);
   while(!q.empty())
   {
    Node * curr=q.front();
    q.pop();
    cout<<curr->data<<" ";
    if(curr->left!=NULL)
     q.push(curr->left);
    if(curr->right!=NULL)
     q.push(curr->right);
    }
   }
}
