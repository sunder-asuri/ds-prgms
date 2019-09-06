/*non recursive linear search*/
#include<iostream>
using namespace std;
int lsearch(int list[],int n,int key);
int main()
{
int n,i,key,list[25],pos;
cout<<"Enter no of elemnts\n";
cin>>n;
cout<<"Enter "<<n<<" numbers";
for(i=0;i<n;i++)
cin>>list[i];
cout<<"Enter key to search";
cin>>key;
pos = lsearch(list,n,key);
if(pos == -1)
cout<<"Elment not found";
else
cout<<"\nElment found at index "<< pos;
}
int lsearch(int list[],int n,int key)
{
 int i,pos = -1;
 for(i=0;i<n;i++)
 if(key == list[i])
 {
  pos = i;
  break;
 }
 return pos;
}
