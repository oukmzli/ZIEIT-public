#include <iostream>
using namespace std;

void getRandomVector(int*Arr, int n) {
    for (int i = 0;i < n;i++) Arr[i] = rand() % 10;
}
void showVector(int * Arr, int n) {
    for(int i=0;i<n;i++)cout<<Arr[i]<<" ";
    cout << endl;
}

bool checkOrthogonality (int * arrx, int * arry, int n){
    int scalar = 0;
    for (int i = 0; i < n; i++) scalar += arrx[i] * arry[i];
    if (scalar == 0) return true; else return false;
}

int main() {
    int n;
    cout << "Enter array lenght: n = ";
    cin >> n;
    int* x = new int[n];
    int* y = new int[n];
    
    getRandomVector(x, n); getRandomVector(y, n);
    showVector(x, n); showVector(y, n);
    if (checkOrthogonality(x, y, n)) {
        cout << "Arrays are perpendicular." << endl;
    } else {
        cout << "Arrays aren't perpendicular." << endl;
    }
    
    delete[]x; delete[]y;
    system("pause");
    return 0;
}

