//#include"PhanSo.h"
//void menu()
//{
//	printf("***************************Menu****************************\n");
//	printf("* 1.Nhap mang so phan so va xuat ra man hinh              *\n");
//	printf("* 2.Tao mang so phan so va xuat ra man hinh              *\n");
//	printf("* 3.Doc mang so phan so tu File va xuat ra man hinh       *\n");
//	printf("* 4.Xuat cac phan tu co tu > mau                          *\n");
//	printf("* 5.Rut gon phan so                                       *\n");
//	printf("* 6.Tich cac phan so trong mang                           *\n");
//	printf("* 7.Tim phan tu lon nhat trong mang                       *\n");
//	printf("* 0.Thoat chuong trinh			                  *\n");
//	printf("***************************End*****************************\n");
//}
//void fraction(PS& a)// Nhap ps
//{
//	printf("Nhap tu so: ");
//	scanf("%d", &a.tu);
//	do
//	{
//		printf("Nhap mau so: ");
//		scanf("%d", &a.mau);
//		if (a.mau == 0)
//		{
//			printf("Lm d gi chia cho 0 dc!! Nhap lai\n");
//		}
//	} while (a.mau == 0);
//}
//void getFraction(PS a)
//{
//	printf("%d/%d\t", a.tu, a.mau);
//}
//void Input(PS*& a, int& n) {
//	soLuongPhanTu(n);
//	a = new PS[n];
//	for (int i = 0; i < n; i++)
//	{
//		printf("Phan so thu %d\n", i + 1);
//		PS temp;
//		fraction(temp);
//		a[i] = temp;
//	}
//}
//void Output(PS* a, int n)
//{
//	printf("Mang phan so: ");
//	for (int i = 0; i < n; i++)
//	{
//		getFraction(a[i]);
//	}
//	printf("\n");
//}
//void soLuongPhanTu(int& n)
//{
//	do
//	{
//		printf("Nhap so luong phan tu :");
//		scanf("%d", &n);
//		if (n <= 0)
//		{
//			printf("Moi ban nha lai! ");
//		}
//	} while (n <= 0);
//}
//void getNumberatorGreaterDenomiator(PS* a, int& n)
//{
//	int count = 0;
//	printf("Cac phan so co tu > mau: ");
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i].tu > a[i].mau)
//		{
//			printf("%d/%d\t", a[i].tu, a[i].mau);
//		}
//		else
//		{
//			count++;
//		}
//	}
//	if (count == n)
//	{
//		printf("Khong co phan so nao co tu > mau!!\n");
//	}
//	printf("\n");
//}
//void createRandomArrayFraction(PS*&a, int &n)
//{
//	soLuongPhanTu(n);
//	a = new PS[n];
//	srand((unsigned)time(NULL));
//	for (int i = 0; i < n; i++)
//	{
//		int temp1, temp2;
//		temp1 = rand() % 199 - 99;
//		do
//		{
//			temp2 = rand() % 199 - 80;
//		} while (temp2 <= 0);
//		a[i].tu = temp1;
//		a[i].mau = temp2;
//	}
//}
//void getFracArrayInFile(const char *filename, PS *&a, int &n)
//{
//	FILE *f = fopen(filename, "rt");// đầu tiên vô là pải mở file
//	if (!f)// check file
//	{
//		printf("Khong doc duoc FILE!!\n");
//	}
//	fscanf(f, "%d", &n);// lấy sl pt
//	a = new PS[n];// create sl pt mảng a
//	for (int i = 0; i < n; i++)
//	{
//		PS temp;// tạo biến tạm
//		scanfFrac(f, temp);// số trg file
//		a[i] = temp;// gắn lại vào a[i]
//	}
//	fclose(f);// đóng file
//}
//void scanfFrac(FILE *fi, PS &a)// * Quan trọng: lấy từ trong file
//{
//	fscanf(fi, "%d/%d", &a.tu, &a.mau);// lấy phần tử của file
//}
//void getEasyFrac(PS &a)
//{
//	if (a.tu > a.mau)
//	{
//		for (int i = a.tu; i >= 2; i--)
//		{
//			if (a.tu%i == 0 && a.mau%i == 0)
//			{
//				a.tu /= i;
//				a.mau /= i;
//
//			}
//		}
//	}
//	else
//	{
//		for (int i = a.mau; i >= 2; i--)
//		{
//			if (a.tu%i == 0 && a.mau%i == 0)
//			{
//				a.tu /= i;
//				a.mau /= i;
//			}
//		}
//	}
//}
//void updateEasyFrac(PS *&a, int &n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		getEasyFrac(a[i]);
//	}
//}
//void getTimeFrac(PS* &a, int &n)
//{
//	int timeTu = 1, timeMau = 1;
//	for (int i = 0; i < n; i++)
//	{
//		timeTu *= a[i].tu;
//		timeMau *= a[i].mau;
//	}
//	PS b;
//	b.tu = timeTu;
//	b.mau = timeMau;
//	getEasyFrac(b);
//	printf("Tich cac phan so trong mang: %d/%d\n", b.tu, b.mau);
//}
//int convertFracToInt(PS &a)
//{
//	return (float)a.tu / a.mau;
//}
//void findMaxNumber(PS *&a, int n)
//{
//	float max = convertFracToInt(a[0]);
//	int j = 0;
//	for (int i=0; i < n; i++)
//	{
//		if (max < convertFracToInt(a[i]))
//		{
//			max = convertFracToInt(a[i]);
//			j = i;
//		}
//	}
//	printf("Phan tu lon nhat trong mang: %d/%d\n", a[j].tu, a[j].mau);
//}
