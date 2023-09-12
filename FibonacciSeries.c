#include <stdio.h>
int fibonacci(int n) 
   {
   if(n <=1)
      return n;
    else {
      return (fibonacci(n-1) + fibonacci(n-2));
   }
}
int main() {
   int i, n, fib;
   printf("Enter the number of elements in fibonacci series:");
   scanf("%d",&n);
   for(i = 0;i<n;i++) {
      fib = fibonacci(i);
      printf("%d ",fib);
   }
}
