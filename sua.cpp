/*stacks using arrays*/
#include<iostream>
#include<stdlib.h>
#define MAX 5
int top=-1;
int a[5];
using namespace std;
class SUA
{
public:
	void push();
	void pop();
	void display();
};
int main()
{
SUA obj;
int choice;
while(1)
{
cout<<"1.push\n2.pop\n3.display\n4.exit\n";
cout<<"Enter your choice\n";
cin>>choice;
switch(choice)
{
case 1: obj.push();
	break;
case 2: obj.pop();
	break;
case 3:obj.display();
	break;
case 4:exit(0);
default:cout<<"Wrong choice\n";
}
}
}
void SUA::push()
{
int pushed_item;
if(top ==(MAX-1))
cout<<"Stack overflow\n";
else
{
cout<<"Enter the item to be pushed in stack: ";
cin>>pushed_item;
top=top+1;
a[top] = pushed_item;
}
}
void SUA :: display()
{
int i;
if(top== -1)
cout<<"Stack is empty\n";
else
{
cout<<"stack elemnts : \n";
for(i=top;i>=0;i--)
cout<<a[i]<<"\n";
}
}
void SUA :: pop()
{
if(top == -1)
cout<<"STack underflow\n";
else
{
cout<<"Poped elment is : \n"<<a[top];
top=top-1;
}
}  

