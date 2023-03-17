#include <iostream>
using namespace std;

int nsd (int n, int m) {
    if (n != m) {
        if (n > m) return nsd(n - m, m); else return nsd(n, m - n);
    } else return n;    
}

int main() {
    int n, m;
    cout << "Input n="; cin >> n;
    cout << "Input m="; cin >> m;
    
    cout << nsd(n, m) << endl;
    system("pause");
    return 0;
}
