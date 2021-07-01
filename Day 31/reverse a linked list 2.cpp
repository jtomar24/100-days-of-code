Node *revList(Node *head)
{
    vector<int> arr;
    for(Node *curr=head;curr!=NULL;curr=curr->next)
    {
        arr.push_back(curr->data);
    }
    
    for(Node *curr=head;curr!=NULL;curr->next)
    {
        curr->data=arr.back();
        arr.pop_back();
    }
}
