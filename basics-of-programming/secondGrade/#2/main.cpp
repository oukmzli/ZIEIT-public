#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double p, t, u;
    cout << "p = ";
    cin >> p;
    cout << "t = ";
    cin >> t;
    if (p > 0) {
        u = p * t * t * t - cos(p*t)*cos(p*t) / t*t + 1;
    }
    else if (p == 0) {
        u = cbrt(log10(t*t + 1)) + atan(t / 2);
    }
    else {
        u = p*exp(p*t) + t;
    }
    
    cout << "u = " << u << endl;
    system("pause");
    return 0;
}

