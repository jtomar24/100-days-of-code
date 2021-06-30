void printNthfromEnd(Node *head,int n)
{
    int len=0;
    for(Node *curr=head;curr!=NULL;curr=curr->next)
    {
        len++;
    }
    if(len<n)
    {
        return;
    }
    Node *curr=head;
    
    for(int i=1;i<len-n+1;i++)
    {
        curr=curr->next;
        
    }
    cout<<(curr->data)<<" ";
}
