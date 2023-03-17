#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    double x_n, x_k, dx, x, a, A, B, chi;
    int i, n;
  /*  cout << "Input x_n = ";
    cin >> x_n;
    cout << "Input x_k = ";
    cin >> x_k;
    cout << "Input a = ";
    cin >> a;
    cout << "Input n = ";
    cin >> n;*/
    x_n = 0.9;
    x_k = 2.7;
    a = 6.5;
    n = 11;

    x = x_n; i = 1;
    dx = (x_k - x_n) / (n - 1);
    while (x <= x_k) {
        if (x >= 1) {
            A = exp(-1 * sqrt(x-1)) + a;
            if (A > 0) {
                B = log(A) - (sin(x+a) + exp(x+a));
                if (cos(B) != 0) {
                    chi = pow(tan(B), 3);
                    cout << i << ". x=" << x << " chi= " << chi << endl;
                } else cout <<i << ". x=" << x << " chi not exist (cos(B)=0)"  << endl;
            } else cout << i << ". x=" << x << " beta not exist (A<=0)" << endl;
        } else cout << i << ". x=" << x << " beta not exist (x<1)" << endl;
        i++; x += dx;
    }
    system("PAUSE");
    return 0; }
