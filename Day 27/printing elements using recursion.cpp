void rPrint(Node *head)
{
  if(head==NULL)
    return;
  cout<<(head->data)<<" ";
  rPrint(head->next);
} 
