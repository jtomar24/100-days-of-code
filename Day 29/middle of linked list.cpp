void printMiddle(Node *head)
{
    if(head==NULL)
    {
        return ;
    }
    int count=0;
    Node *curr;
    for(curr=head;curr!=NULL;curr=curr->next)
    {
        count++;
    }
    curr=head;
    for(int i=0;i<count/2;i++)
    {
        curr=curr->next;
    }
    cout<<curr->data;
}
