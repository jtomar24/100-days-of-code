#include <bits/stdc++.h>
using namespace std;


struct Node
{
  int data;
  Node *next;
  
  //constructor
  Node(int x)
  {
    data=x;
    next=NULL;
  }
};

Node *insertBegin(Node *head,int x)
{
    Node *temp=new Node(x);
    temp->next=head;
    return head;
}

int main()
{
    Node *head=NULL;
    head=insertBegin(head,30);
    head=insertBegin(head,20);
    head=insertBegin(head,10);
  
    return 0;
}
