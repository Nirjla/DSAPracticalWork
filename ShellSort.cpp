
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
     int *a, i, j, n,temp,flag;
    cout<<"Enter the size of array : ";
    cin>>n;
    a=new int[n];
    cout<<"\nEnter "<<n<<" elements\n";
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }

     for(i=n/2; i>0; i/=2)
       {
            flag=1;
            while(flag==1)
            {
                flag=0;
                for(j=0; j<10-i; j++)
                {
                    if(a[j]>a[j+i])
                    {

                        temp = a[j];
                        a[j] = a[j+i];
                        a[j+i] = temp;
                        flag=1;
                    }
                }
            }
       }
    cout<<"\nElements after shell sorting\n";
    for(i=0; i<n;i++)
    {
         cout<<"Iteration "<< i <<" = " <<a[i]<<"\n";
    }

    return 0;
}



