#include "printArray.hpp"
void arrayPrint(int **array, int rowLenght, int columnLenght) {
    for (int i = 0; i < rowLenght; i++) {
        for (int j = 0; j < columnLenght; j++) {
            cout << array[i][j] << '\t';
        }
        cout << endl;
    }
}
