#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, a, A, B, C, D;
    cout << "a = ";
    cin >> a;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    
    A = a * a * pow(tan(x), 4) - 3 * cos(y) * cos(y);
    B = exp(x) + exp(y);
    C = fabs(2 * a * pow(x, 3) - 3 * a * a * x + y);
    D = 3 + sin(x) + cos(y) + 3;
    cout << "delta = " << sqrt(A / B) + log2(C / D) + cos(a*x) * (1 + cos(y)/sin(y)) << '\n';
    
    return 0;
}

