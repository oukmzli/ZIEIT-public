#include <iostream>
using namespace std;

int main() {
    cout << "1." << endl;
    cout << "Vvedite znachenia a, b, c, m: ";
    int a, b, c, m;
    int g = 10;
    cin >> a >> b >> c >> m;
    cout << "a) " << (a + b) / c + pow(c, 2) / a - b << endl;
    cout << "b) " << 3 + 1 / 2 + c / pow(a, 2) + 2 * a * b + pow(b, 2) << endl;
    cout << "c) " << m * g * cos(pow(a, 2)) << endl;
    
    cout << "2." << endl;
    double x = 3.14, α = 3.14, y = 0;
    a = 4;
    cout << "a) " << "z1 = " << (sin(2 * α) + sin(5 * α) - sin(3 * α)) / (cos(α) + 1 - 2 * pow(sin(2 * α), 2)) << " z2 = " << 2 * sin(α)<< endl;
    cout << "b) " << "z1 = " << pow(cos(x), 4) + pow(sin(y), 2) + 1 / 4 * pow(sin(2 * x), 2) - 1 << " z2 = " << sin(y + x) * sin(y - x) <<  endl;
    cout << "c) " << "z1 = " << 1 - 1 / 4 * pow(sin(2 * α), 2) + cos(2 * α) << " z2 = " << pow(cos(α), 2) + pow(cos(α), 4) << endl;
    cout << "d) " << "z1 = " << ((a + 2) / sqrt(2 * a) - a / ((sqrt(2 * a) + 2) + 2 / a - sqrt(2 * a))) * (sqrt(a) - sqrt(2)) / (a + 2) << " z2 = " << 1 / sqrt(a) + sqrt(2) << endl;
    
    return 0;
}
