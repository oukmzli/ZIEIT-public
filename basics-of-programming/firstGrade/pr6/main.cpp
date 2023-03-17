#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cout << "1." << endl;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
        cout << i * i << endl;
    }
    
    cout << "2." << endl;
    cout << "Vvedite cenu: ";
    int price, PRICECONST;
    n = 100;
    cin >> price;
    price /= 10;
    PRICECONST = price;
    for (int i = 0; i < 10; i++) {
        cout << n << "g = " << price << endl;
        price += PRICECONST;
        n += 100;
    }
    
    cout << "3." << endl;
    cout << "Vvedite kol-vo volos: ";
    cin >> n;
    n -= 1;
    double i;
    int porciaVolos = 1;
    for (i = 0; n > 0; i++) {
        n -= porciaVolos;
        porciaVolos *= 2;
    }
    cout << i + 1 << " dney" << endl;
    
    return 0;
}
