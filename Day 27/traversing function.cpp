void printList(Node *head)
{
  Node *curr=head;
  while(curr!=NULL)
  {
    cout<<(curr->data)<<" ";
    curr=curr->next;
  }
}
  
