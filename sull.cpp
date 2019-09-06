/*stacks using Linkedlist*/
#include<iostream>
#include<stdlib.h>
using namespace std;
class SULL
{
  struct stack
  {
    int data;
    struct stack *next;
  } *top;
typedef struct stack node;
public:
void push();
int pop();
void display();
SULL();
};
SULL :: SULL()
{
top = NULL;
}
int main()
{
SULL obj;
int ch,k;
while(1)
{
cout<<"Main Menu\n";\
cout<<"1.Push\n2.Pop\n3.Display\n4.Exit\n";
cout<<"Enter your choice \n";
cin>>ch;
switch(ch) 
{
case 1:obj.push();
	break;
case 2 : k=obj.pop();
	cout<<"\nDeleted elment is : "<<k;
 	break;
case 3: obj.display();
	break;
case 4: exit(0);
default : cout<<"Enter the correct option \n";
	  break;
}
}
}
void SULL :: push()
{
node *temp;
int element;
temp = new node;
cout<<"Enter the inserted elment into the stack : ";
cin>>element;
temp->data = element;
temp->next=top;
top=temp;
}
int SULL :: pop()
{
int k;
node *p,*q;
p=top;
k=top->data;
q=top;
top=p->next;
free(q);
return(k);
}
void SULL :: display()
{
node *p;
p=top;
cout<<"\nElments in stack are \n";
if(top != NULL)
{
  while(p != NULL)
  {
    cout<<"->"<<p->data;
    p=p->next;
  }
}
else
cout<<"Queue is empty\n";
}
