struct Node
{
  int Data;
  Node *next;
  
  //constructor
  Node(int x)
  {
    data=x;
    next=NULL;
  }
};
int main()
{
    Node *head=new Node(10);
    Node *second=new Node(20);
    Node *third=new Node(30);
  
   head->next=second;
   second->next=third;
   return 0;
  
}
  
  
