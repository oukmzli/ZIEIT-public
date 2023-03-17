#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

double func(double u, double v) {
    return log(u - v * v) * log(u - v * v);
}

int main() {
    double x, a, b, z;
    cout << "Input x=";
    cin >> x;
    cout << "Input a=";
    cin >> a;
    cout << "Input b=";
    cin >> b;
    z = func(a, x) / (b*b - func(b, x) - pow(func(a, x), 3));
    cout << "z=" << z << endl;
    
    system("PAUSE");
    return 0;
}
