/*Queue using arrays*/
#include<iostream>
#include<stdlib.h>
#define max 4
int queue_array[max];
int rear= -1;
int front = -1;
using namespace std;
class qua
{
public:
	void insert();
	void dele();
	void display();
};
int main()
{
qua obj;
int choice;
while(1)
{
cout<<"\n1.insert\n2.delete\n3.display\n4.quit\n";
cin>>choice;
switch(choice)
{
case 1: obj.insert();
	break;
case 2: obj.dele();
	break;
case 3: obj.display();
	break;
case 4: exit(1);
default: cout<<"Wrong choice\n";
}
}
}
void qua :: insert()
{
int added_item;
if(rear == (max - 1))
cout<<"queue overflow\n";
else
{
if(front == -1)
front =0;
cout<<"input the element for adding in queue : \n";
cin>>added_item;
rear = rear + 1;
queue_array[rear] = added_item;
}
}
void qua::display()
{
int i;
if(front == -1)
cout<<"queue is empty \n";
else
{
cout<<"queue is : \n";
for(i= front; i <= rear;i++)
cout<<queue_array[i]<<"\n";
}
}
void qua :: dele()
{
if(front == -1)
cout<<"queue underflow\n";
else
{
cout<<"Elment deleted from queue is : "<<queue_array[front];
front = front + 1;
}
}
