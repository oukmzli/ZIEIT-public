#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    int n, scalar, i;
    scalar = 0;
    cout << "Enter array lenght: n = ";
    cin >> n;
    int* x = new int[n];
    int* y = new int[n];
    
    for (i = 0; i < n; i++) {
        cout << "Input x(" << i << ") = ";
        cin >> x[i];
    }
    
    for (i = 0; i < n; i++) {
        cout << "Input y(" << i << ") = ";
        cin >> y[i];
    }
    
    for (i = 0; i < n; i++) scalar += x[i]*y[i];
    scalar? cout << "Arrays aren't perpendicular." << endl: cout << "Arrays are perpendicular." << endl;
    system("PAUSE");
    return 0;
}
