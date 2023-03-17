#ifndef Array_hpp
#define Array_hpp
#include <iostream>
using namespace std;
void inputArray(int *Arr, int n);//automatic mode
void showArray(int *Arr, int n);//вивод масиву
void inputArray(int*Arr, int n,bool mode);//manual mode
bool orthogonalityCheck(int * arrx, int * arry, int n);//arrx * arry = 0
#endif
