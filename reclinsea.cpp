/*Recursive linear search*/
#include<iostream>
using namespace std;
int rec_lsearch(int list[],int n,int key);
int main()
{
int n,i,key,list[25],pos;
cout<<"Enter no of elments\n";
cin>>n;
cout<<"Enter "<<n<< "elments";
for(i=0;i<n;i++)
cin>>list[i];
cout<<"Enter key to search";
cin>>key;
pos = rec_lsearch(list,n,key);
if(pos == -1)
cout<<"\nElemnt not found";
else
cout<<"\n Elment found at index "<<pos;
}
int rec_lsearch(int list[],int n,int key)
{
if(n<=0)
return -1;
if(list[n] == key)
return n;
else 
return rec_lsearch(list,n-1,key);
}
