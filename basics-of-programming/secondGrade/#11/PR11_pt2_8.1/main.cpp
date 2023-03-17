#include <iostream>
#include "Array.hpp"
using namespace std;

int main() {
    int n;
    cout << "Enter array lenght: n = ";
    cin >> n;
    int* x = new int[n];
    int* y = new int[n];
    
    bool mode;
    cout << "Choose input mode. 0 - manually, 1 - auto : "; cin >> mode;
    cout << "First array: " << endl; inputArray(x, n, mode);
    cout << "Second array: " << endl; inputArray(y, n, mode);
    showArray(x, n); showArray(y, n);
    if (orthogonalityCheck(x, y, n)) {
        cout << "Arrays are perpendicular." << endl;
    } else {
        cout << "Arrays aren't perpendicular." << endl;
    }
    
    delete[]x; delete[]y;
    system("pause");
    return 0;
}
