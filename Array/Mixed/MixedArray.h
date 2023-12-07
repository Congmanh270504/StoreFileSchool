#ifndef MixedArray_h
#define MixedArray_h

#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
struct PhanSo
{
	int tu, mau;
};
struct HonSo
{
	int nguyen;
	PhanSo ps;
};
typedef PhanSo PS;
typedef HonSo HS;
void soLuongPhanTu(int& n);
//
void menu();
void menu2();

void getEasyFrac(HS& b);

void Input(HS* &b, int &n);
void readMixedFile(const char* filename, HS*& b, int& n);
void writeFileMixedArray(const char* filename, HS*& b, int& n);
void writeFileFracArray(const char* filename, HS*& b, int& n);
void Output(HS* b, int n);
void getFracArray(HS*& b, int& n);

float mixToFracNumber(HS& x);

//So sanh 2 so
void compareMixedNumber(HS *&b, int &n, int x, int  y);
// Chuyen tu Mixed to Frac
void getConvertMixToFrac(HS& b);
void getConvertMixToFracArray(HS*& b, int& n);
// Chuyen tu Frac to Mixed
void getConvertFracToMix(HS& b);
void getConvertFracToMixArray(HS*& b, int& n);

void getAllResultMixedNumber(HS*& b, int x, int y);
void interchangeSortIncrease(HS*& b, int& n);
void interchangeSortDecrease(HS*& b, int& n);

void findMixedNumber(HS*& b, int& n, HS& x);

void sortEvenFirstOddSecond(HS* &b, int& n);

int findWithBinarySearchIncrease(HS*& b, int& n, float x);
int findWithBinarySearchDecrease(HS*& b, int& n, float x);

void devideMixedArray(HS *&b, int &n);
void deleteIndex(HS *&b, int &n, int index);

#endif // !


