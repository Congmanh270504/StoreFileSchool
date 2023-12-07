#include"Array1D.h"
void nhapSoNguyenDuong(int &n)
{
	do
	{
		printf("\nNhap so nguyen duong : ");
		scanf("%d", &n);
		if (n <= 0)
		{
			printf("Moi ban nha lai! ");
		}
	} while (n <= 0);
	printf("So nguyen duong vua nhap la: %d", n);
}
void soLuongPhanTu(int &n)
{
	do
	{
		printf("\nNhap so luong phan tu :");
		scanf("%d", &n);
		if (n <= 0)
		{
			printf("Moi ban nha lai! ");
		}
	} while (n <= 0);
}
void nhapMang1ChieuSoNguyen(int *&a, int &n)
{
	soLuongPhanTu(n);
	printf("\nSo nguyen duong vua nhap la: %d\n", n);
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		int temp;
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &temp);
		a[i] = temp;
	}
}
void taoMang1ChieuSoNguyen(int *&a, int &n)
{
	soLuongPhanTu(n);
	a = new int[n];
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		int temp;
		temp = rand() % 199 - 99;
		a[i] = temp;
	}
}
void docMang1ChieuSoNguyen(const char*filename, int *&a, int &n)
{
	FILE *fi = fopen(filename, "rt");
	if (!fi)
	{
		printf("Khong mo dc file!!");
		return;
	}
	fscanf(fi, "%d\n", &n);
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		int temp;
		fscanf(fi, "%d", &temp);
		a[i] = temp;
	}
	fclose(fi);
}
void xuatMang1Chieu(int *a, int n)
{
	printf("Mang 1 chieu: ");
	for (int i = 0; i < n; i++)
	{
		printf("%4d ", a[i]);
	}
	printf("\n");
}
void menu() {
	printf("***************************Menu****************************\n");
	printf("* 1.Nhap so nguyen duong va xuat ra man hinh              *\n");
	printf("* 2.Nhap mang so nguyen va xuat ra man hinh               *\n");
	printf("* 3.Tao mang nguyen  va xuat ra man hinh		  *\n");
	printf("* 4.Doc file nguyen duong va xuat ra man hinh             *\n");
	printf("* 5.Tim gia tri Max trong mang va xuat ra dia chi         *\n");
	printf("* 6.Dia chi cua Max chan va Min le trong mang             *\n");
	printf("* 7.Xoa phan tu co so 0                                   *\n");
	printf("* 8.Them phan tu X vao sau phan tu dau tien               *\n");
	printf("* 9.Tong cac so chinh phuong                              *\n");
	printf("* 10.Xuat cac so cuc dai                                  *\n");
	printf("* 11.Xuat cac so cuc tieu                                 *\n");
	printf("* 12.Xoa phan tu o vi tri K                               *\n");
	printf("* 13.Them phan tu X o vi tri K                            *\n");
	printf("* 14.Chuyen so chan len dau va le xuong cuoi mang         *\n");
	printf("* 15.Mang co phai chan le xen ke khong ?                  *\n");
	printf("* 16.Tim phan tu X trong mang (Tuyen tinh)                *\n");
	printf("* 17.Tim phan tu X trong mang (Nhi tinh)                *\n");
	printf("* 0.Thoat chuong trinh			                  *\n");
	printf("***************************End*****************************\n");
}
void findMax(int* a, int &n)
{
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	printf("Phan tu Max trong mang %d co dia chi trong o nho la: %X\n", max, *(&max));
}
int checkArray(int *&a, int &n)
{
	int countOdd = 0, countEven = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			countEven++;
		}
		else
		{
			countOdd++;
		}
	}
	if (countEven == n)
	{
		return 1;
	}
	else if (countOdd == n)
	{
		return 2;
	}
	else
	{
		return 0;
	}
}
void findMinMax_OddEvenNumber(int *&a, int &n)
{

	int min = a[0], max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (max < a[i] && a[i] % 2 == 0)
		{
			max = a[i];
		}
		else if (min > a[i] && abs(a[i] % 2) == 1)
		{
			min = a[i];
		}
	}
	if (checkArray(a, n) == 1)
	{
		printf("Mang chi co so chan!!\n");
		printf("Dia chi cua Max chan (%d) la: %x\n", max, *(&max));
	}
	else if (checkArray(a, n) == 2)
	{
		printf("Mang chi co so chan!!\n");
		printf("Dia chi cua Min le (%d) la: %x\n", min, *(&min));
	}
	else
	{
		printf("Dia chi cua Max chan (%d) la: %x va Min le(%d) la: %x\n", max, *(&max), min, *(&min));
	}
}
int checkNumber0(int &x)
{
	int count = 0, result = abs(x);
	for (int i = 0; i < result; i++)
	{
		count = x % 10;
		if (count == 0)
		{
			return 1;
		}
		else {
			x / 10;
		}
	}
	return 0;
}
void deleteNumber(int *&a, int &n, int x)
{
	for (int i = x; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
int deleteNumberWith0(int *&a, int &n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (checkNumber0(a[i]))
		{
			deleteNumber(a, n, i);
		}
		else
		{
			count++;
		}
	}
	if (count == n)
	{
		printf("Khong co phan tu nao chu so 0 de xoa!!\n ");
		return 0;
	}
}
void insertNumberAfterFirstNumber(int *&a, int &n, int &x)
{
	for (int i = n - 1; i >= 1; i--)
	{
		a[i + 1] = a[i];
	}
	a[1] = x;
}
int checkSquareNumber(int x)
{
	int count = x % 10;
	if (count == 2 || count == 3 || count == 7 || count == 8 || x < 0)
	{
		return 0;
	}
	return 1;
}
int getSumSquareNumber(int *&a, int &n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (checkSquareNumber(a[i]))
		{
			sum += a[i];
		}
	}
	return sum;
}
void printfMaximumNmber(int* &a, int& n)
{
	printf("Cac so cuc dai cua mang: ");
	for (int i = 1; i < n - 1; i++)
	{
		if (a[i] > a[i + 1] && a[i] > a[i - 1])
		{
			printf("%d\t", a[i]);
		}
	}
	printf("\n");
}
void printfMinimumNumber(int *&a, int &n)
{
	printf("Cac so cuc tieu cua mang: ");
	for (int i = 1; i < n - 1; i++)
	{
		if (a[i] < a[i + 1] && a[i] < a[i - 1])
		{
			printf("%d\t", a[i]);
		}
	}
	printf("\n");
}
void deleteIndex(int *&a, int &n, int x)
{
	for (int i = x; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void insertIndex(int *&a, int &n, int x, int k)
{
	for (int i = n - 1; i >= k; i--)
	{
		a[i + 1] = a[i];
	}
	a[k] = x;
	n++;
}
void convertEvenToHeadArray(int *&a, int &n)
{
	int *b = NULL, count = 0;
	b = new int[n];
	if (b == NULL)
	{
		printf("NULL!!");
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			b[count] = a[i];
			count++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (abs(a[i]) % 2 == 1)
		{
			b[count] = a[i];
			count++;
		}
	}
	a = b;
}
int checkInterleavedArray(int* &a, int &n)
{
	for (int i = 0; i < n - 1; i = i + 2)
	{
		if (a[i] % 2 == 0 && a[i + 1] % 2 == 0 || abs(a[i]) % 2 == 1 && abs(a[i + 1]) % 2 == 1)
		{
			return 0;
		}
	}
	return 1;
}
int findNumber(int *a, int &n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			return i;
		}
	}
	return -1;
}
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void intertchangeSort(int *&a, int &n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
			{
				swap(a[i], a[j]);
			}
	}
}
int binarySearch(int *&a, int &n, int x)// Tim kiem nhi phan
{
	int left = 0, right = n - 1, mid;
	while (left < right)
	{
		mid = (left + right) / 2;
		if (a[mid] == x)
		{
			return mid;
		}
		else if (a[mid] > x)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
}
