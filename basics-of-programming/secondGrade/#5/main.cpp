#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    int n, max, tmp;
    max = 0;
    cout << "Enter amount of rows: n = ";
    cin >> n;
    int** A = new int*[n];
    int** B = new int*[n];
    for (int i = 0; i < n; i++) A[i] = new int[n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) A[i][j] = rand() % 101;
    
    cout << "A: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << A[i][j] << '\t';
        cout << endl;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            tmp = A[i][j];
            if(max < tmp) max = tmp;
        }
    }
    cout << "max = " << max << endl;
    
    for (int i = 0; i < n; i++) B[i] = new int[n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            B[i][j] = A[i][j]/max;
        }
    }
    
    cout << "B: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << B[i][j] << '\t';
        cout << endl;
    }
    

    
    delete[]A;
    delete[]B;
    system("PAUSE");
    return 0;
}
