#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void printLinkedList(Node* n)
{
    while(n!=0)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}



int main() {
    //CREATING 3 NODES
	Node* head=NULL;
	Node* second=NULL;
	Node* third=NULL;
	
	//ALLOCATING NODES IN HEAP
	head=new Node();
	second=new Node();
	third=new Node();
	
	//ASSIGNING THE data
	head->data=1;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=NULL;
	
	printLinkedList(head);
	
	return 0;
}

//output :1 2 3
