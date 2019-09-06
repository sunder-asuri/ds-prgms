 /*Recursive binary search*/
#include<iostream>
using namespace std;
int recbisearch(int a[],int key,int low,int high);
int main()
{
int n,i,key,a[20],pos;
cout<<"Enter no of elments\n";
cin >> n;
cout<<"Enter "<<n<<" numbers in ascending order:";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"Enter key to search: ";
cin>>key;
pos = recbisearch(a,key,0,n-1);
if(pos == -1)
cout<<"Elent not found : ";
else
cout<<"elemnt found at index : "<<pos;
}
int recbisearch(int a[],int key,int low,int high)
{
int mid,pos=-1;
 if(low<=high)
 {
   mid = (low+high)/2;
   if(key == a[mid])
    pos = mid;
   else if(key<a[mid])
    return recbisearch(a,key,low,mid-1);
   else
   return recbisearch(a,key,mid+1,high);
 }
return pos;
}
