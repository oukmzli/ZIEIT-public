#include "Matrix.hpp"

void inputMatrix(int**matrix, int n, bool mode) {
    if(mode) inputMatrix(matrix, n);
    else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << "Enter " << i+1 << " line " << j+1 << " row elements: ";
                cin >> matrix[i][j];
            }
        }
    }
}

void inputMatrix(int**matrix, int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) matrix[i][j] = rand() % 101;
}

void showMatrix(int **matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0;j < n;j++) cout << matrix[i][j] << '\t';
        cout << endl;
    }
}

int getLargestElement(int **matrix, int n) {
    int max = 0, tmp = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            tmp = matrix[i][j];
            if (max < tmp) max = tmp;
        }
    return max;
}

void devideByLargestElement(int **matrixA, int **matrixB, int n, int max) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) matrixB[i][j] = matrixA[i][j] / max;
}
