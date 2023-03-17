#include <iostream>
using namespace std;

int arrayMin (int array[], int i, int min) {
    if (i < 5) {
        if (min > array[i]) min = array[i];
    } else return min;
    i++;
    return arrayMin(array, i, min);
}

int main() {
    int a[5] = {5, 4, 3, 5, 6};
    int max = 10;
    int i = 0;
    
    cout << arrayMin(a, i, max) << endl;
    system("pause");
    return 0;
}
