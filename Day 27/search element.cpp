int search(Node *head,int x)
{
  int pos=1;
  Node *curr=head;
  while(curr!=NULL)
  {
    if(curr->data==x)
    {
      return pos;
    }
    else
    {
      pos++;
      curr=curr->next;
    }
  }
  return -1;
}
