#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("enter the no of element to be inserted \n");
    scanf("%d",&n);
    printf(" inserting the element\n");
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d\n",&a[i]);

    }
    printf(" displaying the inserted element\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
