#include <iostream>
#include <fstream>
#include <math.h>
using std::cout;
int exponentiation(char *fName) // об'явлення функції
{
    std::ofstream f(fName); // створення екзепляру
    if (!f)
    {
        cout << "Problems with file " << fName;
        return 1;
    }
    
    int n = 62; // обявлення змінних
    for (int i = 0; i < n; ++i) //виведення чисел
        f << pow(2, i) << ", "; //і кінців рядків !! (1 << i)
    
    f.close(); // закривається редагування файлу
    return 0;
}
int main() {
    return exponentiation("powers.txt"); //виклик функції
}
