#include <iostream>
using namespace std;
double volume (double r, double h) {
    double v; double pi = 3.14159;
    v = 2*pi*r*h;
    return v;
}

int main() {
    double height;
    double radius;
    cout<<"Vvedite visotu: "; cin>>height;
    cout<<"Vvetite radius: "; cin>>radius;
    cout<<"Obiem cilindra = "<<volume(radius, height)
    return 0;
}
