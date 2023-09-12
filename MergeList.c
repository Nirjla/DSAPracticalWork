#include <stdio.h>
int main()
{
    int n1,n2,n3;
    int a[100], b[100], c[200];
    printf("Enter the size of first array: ");
    scanf("%d",&n1);

    printf("Enter the array elements: ");
    for(int i = 0; i < n1; i++)
      {
         scanf("%d", &a[i]);
      }

    printf("Enter the size of second array: ");
        scanf("%d",&n2);

    printf("Enter the array elements: ");
    for(int i = 0; i < n2; i++)
    {
         scanf("%d", &b[i]);
    }


    n3 = n1 + n2;
    for(int i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }

    for(int i = 0; i < n2; i++)
    {
        c[i + n1] = b[i];
    }


    printf("The merged array: ");
    for(int i = 0; i < n3; i++)
    {
        printf("%d ", c[i]);
    }

}
