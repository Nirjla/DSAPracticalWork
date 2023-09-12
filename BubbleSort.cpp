#include<iostream>
using namespace std;

int main() {
    int *a, i, j, temp, n;
    cout << "Enter the size of the array that you want to set: ";
    cin >> n;
    a = new int[n];
    cout << "Enter " << n << " elements:\n";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Sorting the given elements using Bubble Sort

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Displaying the sorted elements
    for (i = 0; i < n; i++) {
        cout << "\nElement at index " << i << " is " << a[i];
    }

    delete[] a; // Freeing the dynamically allocated memory
    return 0;
}
