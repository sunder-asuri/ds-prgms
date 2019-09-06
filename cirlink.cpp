/*circular linked list*/
#include <iostream>
using namespace std;
#include <stdlib.h>
class cll
{
struct list
{
int data;
struct list *next;
}*head;
public:
typedef struct list node;
cll();
void create();
void insert();
void display();
int deletepos();
void insertatbeg();
void insertatmid();
void insertatend();
void search();
};
cll::cll()
{
head = NULL;
}
int main()
{
int ch,k,c;
cll obj;
do
{
cout << "\n\tMAIN MENU\n";
cout << "\n\t\t1.create \n\t\t2.display\n\t\t3.insert\n\t\t4.deletepos\n\t\t5.search\n\t\t6.exit\n";
cout<< "\n\tenter ur choice";
cin >> ch;
switch(ch)
{
case 1 :obj.create();
break;
case 2:obj.display();
break;
case 3 :obj.insert();
break;
case 4:k= obj.deletepos();
cout << "\ndeleted element from the list : "<<k;
break;
case 5 :obj.search();
break;
case 6: exit(0);
}
}
while(ch>0&&ch<7);
}
void cll::create()
{
node *temp ,*p;
temp = new node;
cout<< "enter the element";
cin >>temp->data;
if (head==NULL)
{
temp->next = temp;
head = temp;
}
else
{
p= head;
while(p->next!=head)
 p=p->next;
p->next = temp;
temp->next = head;
}}
void cll::display()
{
node *q;
q=head;
cout <<" elements in the list are\n";
if (q==head)
{
cout<< "->" << q->data;
q = q->next;
while(q!=head)
{
cout <<"->" << q->data;
q=q->next;
}
}
else
{
cout << "list is empty\n";
}
}
void cll::search()
{
int f =0 ,k,v;
node *p;
p= head;
cout<< "enter the element you want to find";
cin >>k;
do
{
if(p->data == k)
{
f = 1;
cout << "element found";
}
p = p -> next;
}while((p!=head)&&(f == 0));
if (f == 0)
{
cout <<" element not found";
}}
void cll :: insert()
{
int ch;
do
{
cout << "\n\t\t\t1.insertatbeg\n\t\t\t2.insertatmid\n\t\t\t3.insertatend\n\t\t\t4.exit";
cout << " enter ur choice";
cin >>ch;
switch(ch)
{
case 1 : insertatbeg();
break;
case 2 : insertatmid();
break;
case 3 : insertatend();
break;
default : break;
}}
while (ch>0 &&ch<4);
}
void cll ::insertatbeg()
{
node *temp,*p;
temp = new node;
cout<< "enter the inserted element";
cin >> temp -> data;
p= head;
while(p->next!=head)
{
p=p->next;
}
p->next = temp;
temp ->next = head;
head = temp;
}
void cll ::insertatmid()
{
node *temp, *p;
int key;
temp = new node;
cout << "enter the element";
cin >> temp ->data;
cout << "enter the key element ";
cin >> key ;
p= head;
while(p->next!=head)
{
if (p->data == key)
{
temp ->next = p->next;
p->next = temp;
cout << "the node is inserted\n";
}
p = p->next;
}
}
void cll :: insertatend()
{
node *temp ,*p;
temp = new node;
cout<< "\nenter element";
cin>>temp ->data;
if(head == NULL)
{
temp ->next = head;
head = temp;
}
else
{
p= head;
while(p->next!= head)
p = p->next;
p->next = temp;
temp->next = head;
}
}
int cll:: deletepos()
{
node *p ,*p1;
int pos ,i,k;
cout << "\nenter the pos for deletion";
cin >> pos;
p=head;
if (p->data == pos)
{
p1=p->next;
if (p1 ==p)
{
p = NULL;
head = p;
cout << "the node is deleted\n";
}
else
{
while(p->next!=head)
p= p->next;
p->next = p1;
head = p1;
cout << "the node is deleted\n";
}
}
else
{
while(p->next!=head)
{
if(p->next->data==k)
{
p1=p->next;
p->next = p1->next;
p1->next = NULL;
delete p1;
cout << "the node is deleted\n";
}
else
{
p=p->next;
}
cout << "\n\tlist is empty";
}
}
}
