/*non recursive binary search*/
#include<iostream>
using namespace std;
int binary_search(int list[],int key,int low,int high);
int main()
{
int n,i,key,list[25],pos;
cout<<"Enter no of elments\n";
cin>>n;
cout<<"Enter "<<n<<"elements in ascending order\n";
for(i=0;i<n;i++)
 cin>>list[i];
cout<<"Enter key to search";
cin>>key;
pos = binary_search(list,key,0,n-1);
if(pos == -1)
cout<<"Elment not found\n";
else
cout<<"Elment found at index "<<pos;
}
int binary_search(int list[],int key,int low,int high)
{
int mid,pos=-1;
while(low <= high)
{
 mid = (low+high)/2;
if(key == list[mid])
{
  pos = mid;
  break;
}
else if(key>list[mid])
low = mid + 1;
else
high = mid -1;
}
return pos;
}
