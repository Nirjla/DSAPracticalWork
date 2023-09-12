#include <stdio.h>
main()
  {
   int i,n,k,item,j;
   int list[] = {1,3,5,7,8};
    n=5;
   printf("The original array elements are :\n");
   for(i = 0; i<n; i++)
        {
         printf("list[%d] = %d \n", i, list[i]);
        }
   printf("enter the position where element to be deleted \n");
    scanf("%d",&k);

   for(i=k;i<=n;i++)
    {
    list[i]=list[i+1];
    }

   printf("The array elements after deletion :\n");

   for(i = 0; i<n; i++) {
      printf("List[%d] = %d \n", i, list[i]);
   }
}
