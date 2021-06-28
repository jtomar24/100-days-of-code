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

int search(Node *head,int x)
{
    if(head==NULL)
    {
        return -1;
    }
    if(head->data==x)
    {
        return 1;
    }
    else
    {
        int res=search(head->next,x);
        if(res==-1)
        {
            return -1;
        }
        else
        {
            return(res+1);
        }
    }
}
int main()
{
    Node *head=new Node(10);
    Node *second=new Node(20);
    Node *third=new Node(30);
  
   head->next=second;
   second->next=third;
   cout<<search(head,20);
   return 0;
  
}
  
