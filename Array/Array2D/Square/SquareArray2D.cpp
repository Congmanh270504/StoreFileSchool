#include"squarearray2d.h"

void menu()
{
	printf("=============================menu================================\n");
	printf("|| ************************* init **************************** ||\n");
	printf("|| * 1.Nhap mang 2 chieu va xuat mang 2 chieu                * ||\n");
	printf("|| * 2.Tao mang 2 chieu va xuat ra man hinh                  * ||\n");
	printf("|| * 3.Doc mang 2 chieu tu file va xuat ra man hinh          * ||\n");
	printf("|| ************************ getnumber ************************ ||\n");
	printf("|| * 4.Xuat cac phan tu tren duong cheo chinh                * ||\n");
	printf("|| * 5.Xuat cac phan tu song song duong cheo chinh           * ||\n");
	printf("|| * 6.Tong cac so lon hon tri tuyet doi sau no              * ||\n");
	printf("|| ***************************sort**************************** ||\n");
	printf("|| * 7.Sap xep zic-zac                                       * ||\n");
	printf("|| * 8.Sap xep duong cheo chinh tang dan                     * ||\n");
	printf("|| * 9.Tung dong chan dau dong le cuoi dong                  * ||\n");
	printf("|| * 10.Kiem tra mang co doi xung qua duong cheo chinh khong?* ||\n");
	printf("|| **************************writefile************************ ||\n");
	printf("|| * 30.Ghi mang so phan so tu file                          * ||\n");
	printf("|| * 0.Thoat chuong trinh			             * ||\n");
	printf("|| ***************************end***************************** ||\n");
	printf("=================================================================\n");
}
void init(int**& a, int& m)
{
	a = new int* [m];
	for (int i = 0; i < m; i++)
	{
		a[i] = new int[m];
	}
}
void Input(int**& a, int& m)
{
	init(a, m);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("Nhap phan tu a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void Output(int** a, int m)
{
	printf("Mang 2 chieu: \n");
	for (int i = 0; i < m; i++)
	{
		printf("\t");
		for (int j = 0; j < m; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
void createRandomArray2D(int**& a, int& m)
{
	init(a, m);
	srand((unsigned)time(NULL));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = -20 + rand() % 121;
		}
	}
}
void readArray2DFile(const char* filename, int**& a, int& m)
{
	FILE* fi = fopen(filename, "rt");
	if (!fi)
	{
		printf("Loi mo file!!\n");
		return;
	}
	fscanf(fi, "%d\n", &m);
	init(a, m);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			fscanf(fi, "%d", &a[i][j]);
		}
	}
	fclose(fi);
}
void writeFileArray2D(const char* filename, int** a, int m)
{
	FILE* fo = fopen(filename, "wt");
	if (!fo)
	{
		printf("Khong the ghi file!!\n");
		return;
	}
	fprintf(fo, "%d\n", m);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			fprintf(fo, "%d\t", a[i][j]);
		}
		fprintf(fo, "\n");
	}
	fclose(fo);
}
void getNumberMainLine(int**& a, int& m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)
			{
				printf("\t%d", a[i][j]);
			}
		}
	}
	printf("\n");
}
void getNumberParallelMainLine(int**& a, int& m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == 0 && j == m - 1 || i == m - 1 && j == 0 || i == j)
			{
				continue;
			}
			else
			{
				printf("\t%d", a[i][j]);
			}
		}
		printf("\n");
	}
}
void freeMatrix(int**& a, int m)
{
	for (int i = 0; i < m; i++)
	{
		delete a[i];
	}
	delete a;
}
int findMax(int*& b, int n)
{
	int max = b[0];
	for (int i = 1; i < n; i++)
	{
		if (max < b[i])
		{
			max = b[i];
		}
	}
	return max;
}
int findMin(int*& b, int n)
{
	int min = b[0];
	for (int i = 1; i < n; i++)
	{
		if (min > b[i])
		{
			min = b[i];
		}
	}
	return min;
}
void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
void interchangeSortIncrease(int* a, int m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = i + 1; j < m; j++)
		{
			if (a[i] > a[j])
			{
				swap(a[i], a[j]);
			}
		}
	}
}
void interchangeSortDecrease(int* a, int m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = i + 1; j < m; j++)
		{
			if (a[i] < a[j])
			{
				swap(a[i], a[j]);
			}
		}
	}
}
void evenIncreaseDdecreaseRow(int** a, int& m)
{
	for (int i = 0; i < m; i++)
	{
		if (i % 2 == 0)
		{
			interchangeSortIncrease(a[i], m);
		}
		else
		{
			interchangeSortDecrease(a[i], m);
		}
	}
}
void sortZicZac(int** a, int& m)
{
	int* b = new int[m * m];
	int k = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			b[k] = a[i][j];
			k++;
		}
	}
	interchangeSortIncrease(b, k);
	k = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = b[k];
			k++;
		}
	}
	evenIncreaseDdecreaseRow(a, m);// update
}
void interchangeSortMainLineIncrease(int**& a, int& m)
{
	int* b = new int[m];
	int k = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)
			{
				b[k] = a[i][j];
				k++;
			}
		}
	}
	interchangeSortIncrease(b, k);
	k = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)
			{
				a[i][j] = b[k];
				k++;
			}
		}
	}
}
void sortFirstEvenLastOdd(int*& a, int& m)
{
	int* b = new int[m];
	int j = 0;
	for (int i = 0; i < m; i++)
	{
		if (a[i] % 2 == 0)
		{
			b[j] = a[i];
			j++;
		}
	}
	for (int i = 0; i < m; i++)
	{
		if (a[i] % 2 != 0)
		{
			b[j] = a[i];
			j++;
		}
	}
	a = b;
}
void setArraySortFirstEvenLastOdd(int**& a, int& m)
{
	for (int i = 0; i < m; i++)
	{
		sortFirstEvenLastOdd(a[i], m);
	}
}
int checkSymmetryArray2D(int**& a, int& m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] != a[j][i])
			{
				return 0;
			}
		}
	}
	return 1;
}
