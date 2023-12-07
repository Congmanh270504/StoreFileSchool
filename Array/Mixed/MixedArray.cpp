//#include"MixedArray.h"
//void menu()
//{
//	printf("***************************Menu****************************\n");
//	printf("* 1.Tao mang so hon so va xuat ra man hinh                *\n");
//	printf("* 2.Doc mang so phan so tu File va xuat ra man hinh       *\n");
//	printf("* 3.So sanh 2 hon so                                      *\n");
//	printf("* 4.Chuyen Hon so thanh Phan so                           *\n");
//	printf("* 5.Chuyen Phan so thanh Hon so                           *\n");
//	printf("* 6.Tinh tong,hieu,tich,thuong 2 hon so                   *\n");
//	printf("* 7.Sap xep mang tang dan                                 *\n");
//	printf("* 8.Tim Hon so X                                          *\n");
//	printf("* 9.Phan tu nguyen chan dau mang,le cuoi mang             *\n");
//	printf("* 10.Tim HS theo giai thuat Binary Search tang            *\n");
//	printf("* 11.Tim HS theo giai thuat Binary Search giam            *\n");
//	printf("* 12.Chia mang thanh s1 chua phan nguyen,s2 chua phan so  *\n");
//	printf("* 13.Xoa vi tri X                                         *\n");
//	printf("* 20.Ghi mang so phan so tu File                          *\n");
//	printf("* 0.Thoat chuong trinh			                  *\n");
//	printf("***************************End*****************************\n");
//}
//void menu2()
//{
//	printf("*********************Chon kieu ghi FILE********************\n");
//	printf("* 1.Kieu Phan So                                          *\n");
//	printf("* 2.Kieu Hon So                                           *\n");
//	printf("* 0.Thoat chuong trinh			                  *\n");
//	printf("***************************End*****************************\n");
//}
//void soLuongPhanTu(int& n)
//{
//	do
//	{
//		printf("Nhap so luong phan tu :");
//		scanf("%d", &n);
//		if (n <= 0)
//		{
//			printf("Moi ban nha lai!\n ");
//		}
//	} while (n <= 0);
//}
//void setRandomNumber(int& b)
//{
//	b = 1 + rand() % (100);
//}
//void setRandomFrac(int& tu, int& mau)
//{
//	//srand((unsigned)time(NULL));
//	tu = 1 + rand() % 10;
//	mau = 1 + rand() % 10;
//}
//void setRandomMixed(HS& b)
//{
//	//srand((unsigned)time(NULL));
//	float answer = 0;
//	do
//	{
//		answer = 0;
//		b.nguyen = 1 + rand() % (9);
//		b.ps.tu = 1 + rand() % 9;
//		b.ps.mau = 1 + rand() % 20;
//		answer = (float)(b.nguyen * b.ps.mau + b.ps.tu) / b.ps.mau;
//	} while (answer < 1);
//}
//void getRandomMixed(HS& b) {
//	printf("%d*%d/%d   ", b.nguyen, b.ps.tu, b.ps.mau);
//}
//void Input(HS*& a, int& n)
//{
//	soLuongPhanTu(n);
//	a = new HS[n];
//	srand((unsigned)time(NULL));
//	for (int i = 0; i < n; i++)
//	{
//		HS temp;
//		setRandomMixed(temp);
//		a[i] = temp;
//	}
//}
//void fscanfMixedArray(FILE* fi, HS& b)
//{
//	fscanf(fi, "%d*%d/%d", &b.nguyen, &b.ps.tu, &b.ps.mau);
//}
//void readMixedFile(const char* filename, HS*& b, int& n)
//{
//	FILE* fi = fopen(filename, "rt");
//	if (!fi)
//	{
//		printf("Loi mo File!!");
//		return;
//	}
//	fscanf(fi, "%d\n", &n);
//	b = new HS[n];
//	for (int i = 0; i < n; i++)
//	{
//		HS temp;
//		fscanfMixedArray(fi, temp);
//		b[i] = temp;
//	}
//	fclose(fi);
//}
//void fprintfMixedArray(FILE* fo, HS& b)
//{
//	fprintf(fo, "%d*%d/%d\t", b.nguyen, b.ps.tu, b.ps.mau);
//}
//void writeFileMixedArray(const char* filename, HS*& b, int& n)
//{
//	FILE* fo = fopen(filename, "wt");
//	if (!fo)
//	{
//		printf("Loi mo File!! ");
//		return;
//	}
//	fprintf(fo, "%d\n", n);
//	for (int i = 0; i < n; i++)
//	{
//		fprintfMixedArray(fo, b[i]);
//	}
//	fclose(fo);
//}
//void fprintfFracArray(FILE* fo, HS& b)
//{
//	fprintf(fo, "%d/%d\t", b.ps.tu, b.ps.mau);
//}
//void writeFileFracArray(const char* filename, HS*& b, int& n)
//{
//	FILE* fo = fopen(filename, "wt");
//	if (!fo)
//	{
//		printf("Loi mo File!! ");
//		return;
//	}
//	fprintf(fo, "%d\n", n);
//
//	for (int i = 0; i < n; i++)
//	{
//		fprintfFracArray(fo, b[i]);
//	}
//	fclose(fo);
//}
//void Output(HS* b, int n)
//{
//	printf("Mang hon so: ");
//	for (int i = 0; i < n; i++)
//	{
//		getRandomMixed(b[i]);
//	}
//	printf("\n");
//}
//void getFracArray(HS*& b, int& n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (b[i].ps.tu == 0)
//		{
//			printf("%d\t", b[i].ps.tu);
//		}
//		else if (b[i].ps.tu % b[i].ps.mau == 0)
//		{
//			printf("%d\t", b[i].ps.tu / b[i].ps.mau);
//		}
//		else
//		{
//			printf("%d/%d\t", b[i].ps.tu, b[i].ps.mau);
//		}
//	}
//	printf("\n");
//}
//float mixToFracNumber(HS& x)
//{
//	return (float)(x.nguyen * x.ps.mau + x.ps.tu) / x.ps.mau;
//}
//void compareMixedNumber(HS*& b, int& n, int x, int  y)
//{
//	float result1 = mixToFracNumber(b[x]);
//	float result2 = mixToFracNumber(b[y]);
//	if (result1 > result2)
//	{
//		printf("Hon so %d > hon so %d ", x, y);
//	}
//	else if (result1 < result2)
//	{
//		printf("Hon so %d < hon so %d ", x, y);
//
//	}
//	else
//	{
//		printf("Hon so %d < hon so %d ", x, y);
//	}
//}
//// Chuyen tu Mixed to Frac
//void getConvertMixToFrac(HS& b)
//{
//	b.ps.tu = b.nguyen * b.ps.mau + b.ps.tu;
//}
//void getConvertMixToFracArray(HS*& b, int& n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		getConvertMixToFrac(b[i]);
//		getEasyFrac(b[i]);
//	}
//}
//// Chuyen tu Frac to Mixed
//void getConvertFracToMix(HS& b)
//{
//	b.nguyen = b.ps.tu / b.ps.mau;
//	b.ps.tu = b.ps.tu % b.ps.mau;
//}
//void getConvertFracToMixArray(HS*& b, int& n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		getConvertFracToMix(b[i]);
//	}
//}
//void getAllResultMixedNumber(HS*& b, int x, int y)
//{
//	printf("Tong 2 hon so: %d/%d\n", b[x].ps.tu * b[y].ps.mau + b[y].ps.tu * b[x].ps.mau, b[x].ps.mau * b[y].ps.mau);
//	printf("Hieu 2 hon so: %d/%d\n", b[x].ps.tu * b[y].ps.mau - b[y].ps.tu * b[x].ps.mau, b[x].ps.mau * b[y].ps.mau);
//	printf("Tich 2 hon so: %d/%d\n", b[x].ps.tu * b[y].ps.tu, b[x].ps.mau * b[y].ps.mau);
//	printf("Thuong 2 hon so: %d/%d\n", b[x].ps.tu * b[y].ps.mau, b[x].ps.mau * b[y].ps.tu);
//}
//void getEasyFrac(HS& b)
//{
//	if (b.ps.tu > b.ps.mau)
//	{
//		for (int i = b.ps.tu; i >= 2; i--)
//		{
//			if (b.ps.tu % i == 0 && b.ps.mau % i == 0)
//			{
//				b.ps.tu /= i;
//				b.ps.mau /= i;
//
//			}
//		}
//	}
//	else
//	{
//		for (int i = b.ps.mau; i >= 2; i--)
//		{
//			if (b.ps.tu % i == 0 && b.ps.mau % i == 0)
//			{
//				b.ps.tu /= i;
//				b.ps.mau /= i;
//			}
//		}
//	}
//}
//void swap(HS& a, HS& b)
//{
//	HS temp = a;
//	a = b;
//	b = temp;
//}
//void interchangeSortIncrease(HS*& b, int& n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (b[i].nguyen > b[j].nguyen)
//			{
//				swap(b[i], b[j]);
//
//			}
//			else if (b[i].nguyen == b[j].nguyen)
//			{
//				float result1 = (float)b[i].ps.tu / b[i].ps.mau;
//				float result2 = (float)b[j].ps.tu / b[j].ps.mau;
//				if (result1 > result2)
//				{
//					swap(b[i], b[j]);
//				}
//			}
//		}
//	}
//}
//void interchangeSortDecrease(HS*& b, int& n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (b[i].nguyen < b[j].nguyen)
//			{
//				swap(b[i], b[j]);
//
//			}
//			else if (b[i].nguyen == b[j].nguyen)
//			{
//				float result1 = (float)b[i].ps.tu / b[i].ps.mau;
//				float result2 = (float)b[j].ps.tu / b[j].ps.mau;
//				if (result1 < result2)
//				{
//					swap(b[i], b[j]);
//				}
//			}
//		}
//	}
//}
//void findMixedNumber(HS*& b, int& n, HS& x)
//{
//	float result = mixToFracNumber(x);
//
//	int* a = new int[n];
//	int j = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (result == mixToFracNumber(b[i]))
//		{
//			printf("Vi tri cua %d*%d/%d trong mang la: %d\n", b[i].nguyen, b[i].ps.tu, b[i].ps.mau, i);
//		}
//		else
//		{
//			j++;
//		}
//	}
//	if (j == n)
//	{
//		printf("Khong co HS %d*%d/%d trong mang!!\n", x.nguyen, x.ps.tu, x.ps.mau);
//	}
//}
//void sortMax(HS*& b, int& n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (b[i].nguyen > b[j].nguyen)
//			{
//				swap(b[i], b[j]);
//				//printf("%d %d\n", b[i].nguyen, b[j].nguyen);
//			}
//		}
//	}
//}
//void sortMin(HS*& b, int& n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (b[i].nguyen < b[j].nguyen)
//			{
//				swap(b[i], b[j]);
//				//printf("%d %d\n", b[i].nguyen, b[j].nguyen);
//			}
//		}
//	}
//}
//void sortEvenFirstOddSecond(HS*& b, int& n)
//{
//	HS* c = new HS[n];
//	int j = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (b[i].nguyen % 2 == 0)
//		{
//			c[j] = b[i];
//			j++;
//		}
//	}
//	int temp = n - j;
//	sortMax(c, j);
//	for (int i = 0; i < n; i++)
//	{
//		if (j == n)
//		{
//			break;
//		}
//		if (b[i].nguyen % 2 == 1)
//		{
//			c[j] = b[i];
//			j++;
//		}
//	}
//	sortMin(c, temp);
//	b = c;
//	Output(b, n);
//}
//int findWithBinarySearchIncrease(HS*& b, int& n, float x)
//{
//
//	int left = 0, right = n - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		float resultMid = mixToFracNumber(b[mid]);
//		if (x == resultMid)
//		{
//			return mid;
//		}
//		else if (resultMid < x)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//	}
//	return -1;
//}
//int findWithBinarySearchDecrease(HS*& b, int& n, float x)
//{
//
//	int left = 0, right = n - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		float resultMid = mixToFracNumber(b[mid]);
//		if (x == resultMid)
//		{
//			return mid;
//		}
//		else if (resultMid > x)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//	}
//	return -1;
//}
//
//void getNumberArray(int *&s1,int &n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d\t", s1[i]);
//	}
//	printf("\n");
//}
//
//void getFracArray(PhanSo *&s2, int &n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d/%d\t", s2[i].tu,s2[i].mau);
//	}
//	printf("\n");
//}
//void devideMixedArray(HS *&b, int &n)
//{
//	int *s1 = new int[n];
//	PhanSo *s2 = new PhanSo[n];
//	for (int i = 0; i < n; i++)
//	{
//		s1[i] = b[i].nguyen;
//		s2[i].tu = b[i].ps.tu;
//		s2[i].mau = b[i].ps.mau;
//	}
//	printf("Phan nguyen: ");
//	getNumberArray(s1, n);
//	printf("Phan phan so : ");
//	getFracArray(s2, n);
//}
//void deleteIndex(HS *&b, int &n,int index)
//{
//	for (int i = index; i < n; i++)
//	{
//		b[i] = b[i + 1];
//	}
//	n--;
//}
//
