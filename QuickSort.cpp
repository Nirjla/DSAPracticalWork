#include<iostream>
using namespace std;
int partition1(int arr[], int p,int r);
void quicksort(int arr[],int p,int r)
{
   	 int q;
   	 if (p<r)
    	{
       	 q= partition1(arr,p,r);

        	quicksort(arr,p,q-1);

        	quicksort(arr,q+1,r);
	}
}
int  partition1(int  arr[],int  p, int r)
{
   	 int t,j,k,y,i,x;
	 x=arr[r];
	 i=p-1;

    	for(j=p;j<r;j++)
	{
        		if(arr[j]<=x)
		 {
           		 i=i+1;
			t=arr[i];
			arr[i]=arr[j];
			arr[j]= t;
		}
	}
k=arr[i+1];
arr[i+1]=arr[r];
arr[r]=k;
y = i+1;
return y;
}

int main()
{
int arr[8],i,n;
cout<<"Enter the size of array : ";
cin>>n;
cout<<"Enter array elements : \n";
for(i=0;i<n ;i++)
{
    cin>>arr[i];

}
quicksort(arr,0,n);
cout<<" Array after quick sorting  :\n";
for(i=0;i<n;i++)
{
  cout<<"\n Iteration "<< i <<" = "<<arr[i];
}
return 0;
}
