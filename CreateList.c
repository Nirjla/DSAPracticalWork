#include <stdio.h>

int main() {
    int i, n;
    
    printf("Enter the number of elements to be inserted: ");
    scanf("%d", &n);
    
    if (n <= 0 || n > 1000) {
        printf("Invalid input. Please enter a valid number of elements.\n");
        return 1;
    }

    int a[n]; // This is called a variable-length array (VLA)

    printf("Inserting the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Displaying the inserted elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
