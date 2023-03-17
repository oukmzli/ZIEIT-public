#ifndef Matrix_hpp
#define Matrix_hpp
#include <stdio.h>
#include <iostream>
using namespace std;
void inputMatrix(int**matrix, int n);//manual mode
void inputMatrix(int**matrix, int n, bool mode);//automatic mode
void showMatrix(int **matrix, int n);//вивод двумірного масиву
int getLargestElement(int **matrix, int n);//найбільший елемент
void devideByLargestElement(int **matrixA, int **matrixB, int n, int max);//B[i][j] = A[i][j] / max;
#endif
