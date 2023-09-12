#include <stdio.h>

int main()
{
    int a[5] = {1, 4, 5, 3, 8};
    printf("Traverse Through list\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}