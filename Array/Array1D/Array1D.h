// Ho va ten : Trần Công Mạnh 
// Lớp: 13DHTH03
// Buổi/Tiết :CT2/78901
#ifndef Array1D_h
#define Array1D_h

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

void menu();

void nhapSoNguyenDuong(int &n);
void soLuongPhanTu(int &n);

void nhapMang1ChieuSoNguyen(int *&a, int &n);
void taoMang1ChieuSoNguyen(int *&a, int &n);
void xuatMang1Chieu(int *a, int n);
void docMang1ChieuSoNguyen(const char*filename, int *&a, int &n);
void findMax(int*a, int &n);
int checkArray(int *&a, int &n);
void findMinMax_OddEvenNumber(int *&a, int &n);
int checkNumber0(int &x);
int deleteNumberWith0(int *&a, int &n);
void insertNumberAfterFirstNumber(int *&a, int &n, int &x);
int checkSquareNumber(int x);
int getSumSquareNumber(int *&a, int &n);
void printfMaximumNmber(int* &a, int& n);
void printfMinimumNumber(int *&a, int &n);
void deleteIndex(int *&a, int &n, int x);
void insertIndex(int *&a, int &n, int x, int k);
void convertEvenToHeadArray(int *&a, int &n);
int checkInterleavedArray(int* &a, int &n);// check chan le xen ke~

// BT tren lop Buoi-2
int findNumber(int *a, int &n, int x);
void swap(int &a, int &b);
void intertchangeSort(int *&a, int &n);

int binarySearch(int *&a, int &n, int x);// Tim kiem nhi phan
#endif //Mang1ChieuSoNguyen_h
