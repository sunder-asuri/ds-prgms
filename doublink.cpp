/*Double linked list*/
#include<iostream>
#include<stdlib.h>
using namespace std;
class dll
{
 struct list
 {
   int data;
   struct list *next,*prev;
  }*head;
public :
typedef struct list node;
dll();
void create();
void insert();
void display();
void deletepos();
void insertatbeg();
void insertatmid();
void insertatend();
void search();
};
dll::dll()
{
head=NULL;
}
int main()
{
int ch,k,c;
dll obj;
do
{
cout<<"\n\tMAIN MENU\n";
cout<<"\t\t1.create\n\t\t2.display\n\t\t3.insert\n\t\t4.deletepos\n\t\t5.search\n\t\t6.exit\n";
cout<<"\n\tEnter your choice\n";
cin>>ch;
switch(ch)
{
case 1: obj.create();
    	break;
case 2: obj.display();
	break;
case 3: obj.insert();
	break;
case 4:obj.deletepos();
	cout<<"\ndeleted elment from the list is : "<<k;
	break;
case 5: obj.search();
	break;
case 6: exit(0);
}
}while(ch>0&&ch<7);
return 0;
}
void dll:: create()
{
node *temp,*p;
temp=new node;
cout<<"Enter the elment ";
cin>>temp->data;
if(head==NULL)
{
temp->prev=head;
temp->next=head;
head=temp;
}
else
{
p=head;
while(p->next!=NULL)
p=p->next;
temp->next=NULL;
p->next=temp;
}
}
void dll::display()
{
int d;
node *q;
q=head;
cout<<"\nelments in the listv are\n";
while(q!=NULL)
{
cout<<"->"<<q->data;
q=q->next;
}
}
void dll::search()
{
int f=0,k,v,c;
node *p;
p=head;
c=0;
cout<<"Enter the lements you want tp find ";
cin>>k;
while(p!=NULL)
{
c++;
if(p->data==k)
{
f=1;
cout<<"Emlemt found\n"<<c;
}
p=p->next;
}
if(f==0)
cout<<"Elemnt not found\n";
}
void dll :: insert()
{
int ch;
do
{
cout<<"\n\t\t\t1.insertatbeg\n\t\t\t2.insertatmid\n\t\t\t3.insertatend\n\t\t\t4.display\n\t\t\t5.exit";
cout<<"Enter your choice";
cin>>ch;
switch(ch)
{
case 1: insertatbeg();
	break;
case 2: insertatmid();
	break;
case 3:insertatend();
	break;
case 4:display();
	break;
case 5:exit(0);
}
}while(ch>0&&ch<6);
}
void dll::insertatbeg()
{
node *temp;
temp=new node;
cout<<"enter the inserted elment";
cin>>temp->data;
temp->next=head;
temp->prev=NULL;
head=temp;
}
void dll::insertatmid()
{
node *temp,*p;
int key;
temp=new node;
cout<<"Enter the key element ";
cin>>key;
cout<<"Enter the elment\n";
cin>>temp->data;
p=head;
while(p!=NULL)
{
if(p->data==key)
{
p->next->prev=temp;
temp->next=p->next;
p->next=temp;
temp->prev=p;
}
p=p->next;
}
}
void dll :: insertatend()
{
node *temp,*p;
temp=new node;
cout<<"Enter the elment ";
cin>>temp->data;
if(head==NULL)
{
temp->prev=head;
temp->next=head;
head=temp;
}
else
{
p=head;
while(p->next!=NULL)
p=p->next;
temp->next=NULL;
p->next=temp;
}
}
void dll::deletepos()
{
node *p,*t,*q;
int pos ,i,k;
cout<<"\nEnter the position for deletion";
cin>>pos;
if(head!=NULL)
{
if(pos==1)
{
t=head;
head=head->next;
head->prev=NULL;
cout<<t->data<<"is deleted successfully\n";
delete(t);
}
else
{
i=1;
p=head;
q=head;
while(i<pos)
{
q=p;
p=p->next;
i++;
}
t=p;
q->next=p->next;
p->next->prev=q;
cout<<t->data<<" is deleted successfully\n";
free(t);
}
}
else
cout<<"\n\tlist is empty";
}

