#include <stdio.h>
int main()
  {
   int i,j,k,n,item;
   int list[] = {1,3,5,7,8};
    n=5;
   printf("The original array elements are :\n");
   for(i = 0; i<n; i++)
        {
         printf("list[%d] = %d \n", i, list[i]);
        }

   printf("enter the  element to be inserted \n");
   scanf("%d",&item);
   printf("enter the position where element to be inserted \n");
    scanf("%d",&k);
   i = 0;
   j = n;
   n = n + 1;

   while( j >= k) 
     {
           list[j+1] = list[j];
           j = j - 1;
     }
	

list[k] = item;
 printf("The array elements after insertion :\n");

  for(i = 0; i<n; i++) 
    {
         printf("List[%d] = %d \n", i, list[i]);
    }
}
