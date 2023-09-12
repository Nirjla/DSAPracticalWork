#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
//int a[20];
int *a,x,i,j,n;
cout<<"Enter size of array:";
cin>>n;
a=new int[n];
//to perform sorting enter array
cout<<" Enter "<< n << " elements \n " ;
for(i=0;i<n;i++)
{
   cin>>a[i];
}
for(j=1;j<n;j++)
{
 x=a[j];
//compare values in ascending order
    for(i=j-1;i>=0 && x<a[i];i--)
       {
        a[i+1]=a[i];

       }
 a[i+1]=x;
}
cout<<"Elements after insertion sorting:\n";

for(i=0;i<n;i++)
{
    cout<<"\nIteration "<< i <<" = "<<a[i];
}
return 0;
}
