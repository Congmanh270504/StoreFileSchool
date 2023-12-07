//#include"Array2D.h"
//void menu()
//{
//	printf("=============================Menu================================\n");
//	printf("|| **************************Init***************************** ||\n");
//	printf("|| * 1.Nhap mang 2 chieu va xuat mang 2 chieu                * ||\n");
//	printf("|| * 2.Tao mang 2 chieu va xuat ra man hinh                  * ||\n");
//	printf("|| * 3.Doc mang 2 chieu tu File va xuat ra man hinh          * ||\n");
//	printf("|| **************************Common*************************** ||\n");
//	printf("|| * 4.Tong cac so co chu so dau la chu so le                * ||\n");
//	printf("|| * 5.Liet ke cac so hoan thien trong mang                  * ||\n");
//	printf("|| * 6.Tong cac so lon hon tri tuyet doi sau no              * ||\n");
//	printf("|| * 7.Tong cac phan tu tren dong k                          * ||\n");
//	printf("|| * 8.Tong cac phan tu o vi tri bien                        * ||\n");
//	printf("|| ***************************Sort**************************** ||\n");
//	printf("|| * 7.Sap xep mang tang dan                                 * ||\n");
//	printf("|| * 8.Sap xep mang giam dan                                 * ||\n");
//	printf("|| **************************Epic***************************** ||\n");
//	printf("|| * 9.Tim Hon so X                                          * ||\n");
//	printf("|| * 10.Phan tu nguyen chan dau mang,le cuoi mang            * ||\n");
//	printf("|| * 11.Tim HS theo giai thuat Binary Search tang            * ||\n");
//	printf("|| * 12.Tim HS theo giai thuat Binary Search giam            * ||\n");
//	printf("|| * 13.Chia mang thanh S1 chua phan nguyen,S2 chua phan so  * ||\n");
//	printf("|| * 14.Xoa vi tri X                                         * ||\n");
//	printf("|| * 15.Them phan tu X tai vi tri K                          * ||\n");
//	printf("|| * 16.Tao mang C chua Phan so duoc doi tu Hon so B         * ||\n");
//	printf("|| * 17.Tong cac phan tu cua mang HS                         * ||\n");
//	printf("|| **************************Max/Min************************** ||\n");
//	printf("|| * 18.Max cua mang HS                                      * ||\n");
//	printf("|| * 19.Min cua mang HS                                      * ||\n");
//	printf("|| * 20.Xuat vi tri cua phan tu nguyen chan trong mang B     * ||\n");
//	printf("|| * 21.Xuat vi tri Max/Min trong mang B                     * ||\n");
//	printf("|| **************************WriteFile************************ ||\n");
//	printf("|| * 22.Ghi mang so phan so tu File                          * ||\n");
//	printf("|| * 0.Thoat chuong trinh			             * ||\n");
//	printf("|| ***************************End***************************** ||\n");
//	printf("=================================================================\n");
//}
//void elementArray(int& n)
//{
//	printf("Nhap so luong phan tu: ");
//	scanf("%d", &n);
//}
//void init(int**& a, int& m, int& n)
//{
//	//a = (int**)malloc(n * sizeof(int));// khoi tao n dong 
//	//for (int i = 0; i < n; i++)
//	//{
//	//	a[i] = (int*)malloc(m * sizeof(int));// ung vs moi n la co m cot
//	//}
//	a = new int*[m];
//	for (int i = 0; i < m; i++)
//	{
//		a[i] = new int[n];
//	}
//}
//void Input(int**& a, int& m, int& n)// mang 2 chieu can co 2 dau **
//{
//	init(a, m, n);
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("Nhap phan tu a[%d][%d]: ", i, j);
//			scanf("%d", &a[i][j]);
//		}
//	}
//}
//void Output(int**& a, int m, int n)
//{
//	printf("Mang 2 chieu vua tao la: \n");
//	for (int i = 0; i < m; i++)
//	{
//		printf("\t");
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d\t", a[i][j]);
//		}
//		printf("\n");
//	}
//}
//void createRandomArray2D(int**& a, int& m, int& n)
//{
//	init(a, m, n);
//	srand((unsigned)time(NULL));
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			a[i][j] = -20 + rand() % 121;
//		}
//	}
//}
//void readArray2DFile(const char* filename, int**& a, int& m, int& n)
//{
//	FILE* fi = fopen(filename, "rt");
//	if (!fi)
//	{
//		printf("Loi mo File!!\n");
//		getch();
//	}
//	fscanf(fi, "%d %d\n", &m, &n);
//	init(a, m, n);
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			fscanf(fi, "%d", &a[i][j]);
//		}
//	}
//	fclose(fi);
//}
//int checkOdd(int n)
//{
//	n = abs(n);
//	while (n / 10)
//	{
//		n /= 10;
//	}
//	if (n % 2 == 1)
//	{
//		return 1;
//	}
//	return 0;
//}
//int getSumFirstUnitOdd(int**& a, int& m, int& n)
//{
//	int sum = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (checkOdd(a[i][j]))
//			{
//				sum += a[i][j];
//			}
//		}
//	}
//	return sum;
//}
//int checkPrefectNumber(int n)
//{
//	int sum = 1;
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			sum += i;
//		}
//	}
//	if (n == sum)
//	{
//		return 1;
//	}
//	return 0;
//}
//void getPrefectNumberArray2D(int **&a, int &m, int &n)
//{
//	int count = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[i][j] == 1)
//			{
//				continue;
//			}
//			else if (checkPrefectNumber(a[i][j]))
//			{
//				printf("%d\t", a[i][j]);
//			}
//			else
//			{
//				count++;
//			}
//		}
//	}
//	if (count == (m*n))
//	{
//		printf("Mang 2 chieu khong co so hoan thien!!");
//	}
//	printf("\n");
//}
//int getSumAllGreater(int **&a, int &m, int&n)
//{
//	int sum = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n - 1; j++)
//		{
//			if (a[i][j] > abs(a[i][j + 1]))
//			{
//				sum += a[i][j];
//			}
//		}
//	}
//	return sum;
//}
//int getSumRowK(int **&a, int &k, int&n)
//{
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += a[k][i];
//	}
//	return sum;
//}
//int getSumBoundary(int **a, int &m, int &n)
//{
//	int sum1 = 0, sum2 = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i == 0 || i == m - 1)
//			{
//				sum1 += a[i][j];
//			}
//			else
//			{
//				sum2 += a[i][0] + a[i][n - 1];
//				break;
//			}
//		}
//	}
//	return sum1 + sum2;
//}
//void deleteArray(int **&a, int m)
//{
//	for (int i = 0; i < m; i++)
//	{
//			delete a[i];
//	}
//	delete a;
//}