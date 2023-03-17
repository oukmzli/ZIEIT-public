#include <iostream>
#include "Matrix.hpp"
using namespace std;

int main() {
    int n;
    cout << "Enter array lenght: n = ";
    cin >> n;
    int** A = new int*[n];
    int** B = new int*[n];
    for (int i=0;i<n;i++) B[i] = new int[n];
    for (int i=0;i<n;i++) A[i] = new int[n];
    
    bool mode;
    cout << "Choose input mode. 0 - manually, 1 - auto : "; cin >> mode;
    cout << "Martix: " << endl; inputMatrix(A, n, mode);
    
    cout << "A: " << endl; showMatrix(A, n);
    devideByLargestElement(A, B, n, getLargestElement(A, n));
    cout << "B: " << endl; showMatrix(B, n);
    for (int i = 0;i < n; i++) {delete A[i]; delete B[i];}
    delete[]A; delete[]B;
    system("pause");
    return 0;
}
