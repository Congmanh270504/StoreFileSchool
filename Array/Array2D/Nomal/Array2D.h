#ifndef Array2D_h
#define Array2D_h
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
void menu();
void Input(int** &a, int& m, int& n);
void Output(int**& a, int m, int n);
void createRandomArray2D(int**& a, int& m, int& n);
void readArray2DFile(const char* filename, int**& a, int& m, int& n);
int getSumFirstUnitOdd(int**& a, int& m, int& n);
int checkPrefectNumber(int n);

void getPrefectNumberArray2D(int **&a, int &m, int &n);

int getSumAllGreater(int **&a, int &m, int&n);
int getSumRowK(int **&a, int &k, int&n);
int getSumBoundary(int **a, int &m, int &n);
void deleteArray(int **&a, int m);

#endif 
