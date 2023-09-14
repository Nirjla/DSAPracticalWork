#include <iostream>
using namespace std;

int main() {
    int a[10], b[10], c[20], m, n, i, j, k;
    
    cout << "Enter no. of elements for first array = ";
    cin >> m;
    cout << "Enter the elements for first array \n";
    for (i = 0; i < m; i++) {
        cin >> a[i];
    }
    
    cout << "Enter no. of elements for second array = ";
    cin >> n;
    cout << "Enter the elements for second array \n";
    for (j = 0; j < n; j++) {
        cin >> b[j];
    }
    
    i = j = k = 0;
    int s = m + n;
    cout << "Total size of third array is " << s << "\n";
    
    while (i < m && j < n) {
        if (a[i] < b[j]) {
            c[k] = a[i];
            i++;
        }
        else if (a[i] > b[j]) {
            c[k] = b[j];
            j++;
        }
        else {
            c[k] = a[i];
            i++;
            j++;
        }
        k++;
    }
    
    while (i < m) {
        c[k] = a[i];
        i++;
        k++;
    }
    
    while (j < n) {
        c[k] = b[j];
        j++;
        k++;
    }
    
    cout << "Array after Merge sort: ";
    for (k = 0; k < s; k++) {
        cout << " " << c[k];
    }
    
    return 0;
}
