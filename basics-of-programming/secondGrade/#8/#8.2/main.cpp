#include <iostream>
using namespace std;

void getRandomMatrix(int**Arr, int n) {
    for (int i = 0;i < n;i++)
        for (int j = 0;j < n;j++) Arr[i][j] = rand() % 101;
}

void showMatrix(int ** Arr, int n) {
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) cout << Arr[i][j] << '\t';
        cout << endl;
    }
}

int getLargestElement(int ** Arr, int n) {
    int max, tmp;
    max = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            tmp = Arr[i][j];
            if (max < tmp) max = tmp;
        }
    return max;
}

void devideByLargestElement(int ** ArrA, int ** ArrB, int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) ArrB[i][j] = ArrA[i][j] / getLargestElement(ArrA, n);
}

int main() {
    int n = 5;
    int** A = new int*[n];
    int** B = new int*[n];
    for (int i=0;i<n;i++) B[i] = new int[n];
    for (int i=0;i<n;i++) A[i] = new int[n];
    
    getRandomMatrix(A, n);
    cout << "A: " << endl; showMatrix(A, n);
    devideByLargestElement(A, B, n);
    cout << "B: " << endl; showMatrix(B, n);
    
    for (int i = 0;i < n; i++) {delete A[i]; delete B[i];}
    delete[]A; delete[]B;
    system("pause");
    return 0;
}

