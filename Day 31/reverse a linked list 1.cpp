Node *reverse(Node *head)
{
    Node *curr=head;
    Node *prev=Null;
    while(curr!=NULL)
    {
        Node next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        
    }
    return prev;
}
