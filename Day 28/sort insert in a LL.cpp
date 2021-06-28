Node *sortedInsert(Node *head,int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
    {
        return temp;
    }
    
    if(x<head->data)
    {
        temp->next=head;
        return temp;
    }
    
    Node *curr=head;
    while(curr->next!=NULL && curr->next->data<x)
    {
        curr=curr->next;
    }
    
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
