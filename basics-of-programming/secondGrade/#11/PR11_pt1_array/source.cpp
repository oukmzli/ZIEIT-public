#include "printArray.hpp"
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int rowLenght, columnLenght;
    cout << "Enter amount of rows: n = "; cin >> rowLenght;
    cout << "Enter amount of columns: m = "; cin >> columnLenght;
    int** A = new int*[rowLenght];
    //заповнення масиву
    for (int i = 0; i < rowLenght; i++) A[i] = new int[rowLenght];
    for (int i = 0; i < rowLenght; i++) {
        for (int j = 0; j < columnLenght; j++) { A[i][j] = rand() % 101; }
    }
    
    arrayPrint(A, rowLenght, columnLenght);
    
    delete[]A;
    return 0;
}
