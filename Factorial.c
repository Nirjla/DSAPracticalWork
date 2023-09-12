#include <stdio.h>

// Function prototype
int fact(int x);

void main()
{
    int n = 3;
    int res = fact(n);
    printf("Factorial is: %d", res);
}

int fact(int x)
{
    int f;
    if (x == 1)
        return 1;
    else
    {
        f = x * fact(x - 1);
        return f;
    }
}
