#include<stdio.h>
void toh(int n, char source, char dest, char aux)
{
  if(n==1)
    {
      printf("%c -> %c \n", source, dest);
      return;
    }	
  toh(n-1, source, aux, dest);
  printf("%c -> %c \n", source, dest);
  toh(n-1, aux, dest, source);
}

int main()
  {
      char source = 'A', destination='B', Auxiliary='C';
      int n;
      printf("Enter the number of disk\t");
      scanf("%d", &n);
      toh(n, source, Auxiliary,destination );
      return 0;
  }

