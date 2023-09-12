#include <stdio.h>
main()
  {	
   int i,n,k,item,j;
   int list[] = {11,13,15,17,18};
    n=5;
   printf("The original array elements are :\n");
   for(i = 0; i<n; i++)
        {
         printf("list[%d] = %d \n", i, list[i]);
        }

   printf("enter the position where element to be update \n");
   scanf("%d",&k);

   printf("enter the  element to be update \n");
   scanf("%d",&item);
   list[k]=item;
   printf("The array elements after deletion :\n");

   for(i = 0; i<n; i++) 
    {
         printf("List[%d] = %d \n", i, list[i]);
                             }
               }
