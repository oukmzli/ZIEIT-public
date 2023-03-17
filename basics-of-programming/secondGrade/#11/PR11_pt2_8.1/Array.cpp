#include "Array.hpp"

void inputArray(int *array, int n,bool mode) {
    if(mode) inputArray(array, n);
    else {
        for (int i = 0; i < n; i++) {
            cout << "Enter " << i+1 << "th element of array: ";
            cin >> array[i];
        }
    }
}

void showArray(int *Arr, int n) {
    for(int i=0; i < n; i++)cout<<Arr[i]<<" ";
    cout << endl;
}

void inputArray(int*array, int n) {
    for (int i = 0; i < n; i++) array[i] = rand() % 10;
}

bool orthogonalityCheck (int * arrx, int * arry, int n) {
    int scalar = 0;
    for (int i = 0; i < n; i++) scalar += arrx[i] * arry[i];
    if (scalar == 0) return true; else return false;
}
