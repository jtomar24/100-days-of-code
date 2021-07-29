#include <iostream>
using namespace std;
#define MAX_SIZE 101
int A[MAX_SIZE];
int top=-1;

void push(int x)
{
    if(top==MAX_SIZE)
    {
        cout<<"stack overflow"<<endl;
        
    }
    A[++top]=x;
}

void pop()
{
    if(top==-1)
    {
        cout<<"no element to pop"<<endl;
    }
    top--;
}

void print()
{   cout<<"stack:"<<" ";
    for(int i=0;i<=top;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main() {
push(2);
print();
push(5);
print();
push(8);
print();
pop();
print();
return 0;
}
