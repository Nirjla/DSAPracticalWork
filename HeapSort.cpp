#include<iostream>
#include<conio.h>
#include<stdio.h>
#define size 50
using namespace std;
void insertheap(int[],int,int);
int deleteheap(int[],int);
void heapsort(int[],int);
int main()
{int a[size];
int i,n;
cout<<"enter the size of array\n";
cin>>n;
cout<<"enter elements for array\n";
for(i=1;i<=n;i++)
cin>>a[i];
heapsort(a,n);
cout<<"the sorted array is\n";
for(i=1;i<=n;i++)
cout<<a[i]<<"\t";
getch();}
void heapsort(int a[],int n)
{int i,j,item;
for(j=2;j<=n;j++)
{insertheap(a,j,a[j]);}
while(n>=2)
{  item=deleteheap(a,n);
a[n]=item;
n--;}}
void insertheap(int a[],int n,int item)
{ int i,parent;
i=n;
parent=i/2;
while((i>1) && (item>a[parent]))
{  a[i]=a[parent];
i=parent;
parent=i/2;
if(parent<1)
parent=1;  }
a[i]=item;  }
int deleteheap(int a[],int n)
{  int item,last,left,right,i;
item=a[1];
last=a[n];
i=1;
left=2;
right=3;
while(right<=n)
{ if((last>=a[left]) && (last>=a[right]))
{ a[i]=last;
return(item);  }
else if(a[left]>=a[right])
{  a[i]=a[left];
i=left;  }
else
{  a[i]=a[right];
i=right; }
left=2*i;
right=left+1; }
if((left==n) && (last<a[left]))
i=left;
a[i]=last;
return(item);  }

