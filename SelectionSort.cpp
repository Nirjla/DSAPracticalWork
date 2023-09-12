#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{	
int n,*p;
int i,j,t,small,pos;

cout<<"enter array size : ";
cin>>n;
p=new int[n];

cout<<"enter "<<n<<" elements :\n";
for(i=0;i<n;i++)
{
    cin>>p[i];
}

cout<<"\n before sort : ";
for(i=0;i<n;i++)
{
   cout<<p[i]<<" ";
}


for(i=0;i<n;i++)
 {
     small=p[i];
     pos=i;
     for(j=i+1;j<n;j++)
     {
         if(small>p[j])
         {
             small=p[j];
             pos=j;
         }
     }
    if(pos!=i)
    {
    t=p[i];
    p[i]=p[pos];
    p[pos]=t;
    }
}
cout<<"\n after sorting : ";
for(i=0;i<n;i++)
    cout<<p[i]<<" ";
}
