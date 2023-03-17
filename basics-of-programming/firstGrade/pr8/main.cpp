#include <iostream>
#include <math.h>
using namespace std;

double cylinderVolume (double r, double h) {
    double v;
    v = 2 * r * h * M_PI;
    return v;
}

int lurgerNumber (int a, int b) {
    if(a > b) {
        return a;
    } else {
        return b;
    }
}

long fact(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * fact(n - 1);
    }
}

int main() {
    int a, b, c;
    cout<<"Vedite tri chisla: "; cin>>a>>b>>c;
    cout<<lurgerNumber(lurgerNumber(a, b), c)<<endl;
    int first, last;
    cout<<"Vvedite nachalnoe i konechnoe chislo: ";
    cin>>first>>last;
    last -= first;
    for (int i = 0; i <= last; i++) {
        cout<<"!"<<first<<" = "<<fact(first)<<endl;
        first++;
    }
    return 0;
}
