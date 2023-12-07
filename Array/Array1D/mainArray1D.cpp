#include "Array1D.h"
int main()
{
	const char *filename = "MangSoNguyen.txt";
	int *a = NULL, n, luachon, x, k, result;
	menu();
	do
	{
		printf("Nhap lua chon bai muon lam: ");
		scanf("%d", &luachon);
		switch (luachon)
		{
		case 1:
			nhapSoNguyenDuong(n);
			break;
		case 2:
			nhapMang1ChieuSoNguyen(a, n);
			xuatMang1Chieu(a, n);
			break;
		case 3:
			taoMang1ChieuSoNguyen(a, n);
			xuatMang1Chieu(a, n);
			break;
		case 4:
			docMang1ChieuSoNguyen(filename, a, n);
			xuatMang1Chieu(a, n);
			break;
		case 5:
			if (a == NULL)
			{
				printf("Mang chua duoc khoi tao!!\n(Hay chon option 2 3 4)\n");
			}
			else
			{
				findMax(a, n);
			}
			break;
		case 6:
			findMinMax_OddEvenNumber(a, n);
			break;
		case 7:
			if (a == NULL)
			{
				printf("Mang chua duoc khoi tao!!\n(Hay chon option 2 3 4)\n");
			}
			else
			{
				deleteNumberWith0(a, n);
				xuatMang1Chieu(a, n);
			}
			break;
		case 8:
			if (a == NULL)
			{
				printf("Mang chua duoc khoi tao!!\n(Hay chon option 2 3 4)\n");
			}
			else
			{
				printf("Nhap phan tu muon chen: ");
				scanf("%d", &x);
				insertNumberAfterFirstNumber(a, n, x);
				xuatMang1Chieu(a, n);
			}
			break;
		case 9:
			if (a == NULL)
			{
				printf("Mang chua duoc khoi tao!!\n(Hay chon option 2 3 4)\n");
			}
			else
			{
				printf("Tong cac so chinh phuong la: %d\n", getSumSquareNumber(a, n));
			}
			break;
		case 10:
			if (a == NULL)
			{
				printf("Mang chua duoc khoi tao!!\n(Hay chon option 2 3 4)\n");
			}
			else
			{
				printfMaximumNmber(a, n);
			}
			break;
		case 11:
			if (a == NULL)
			{
				printf("Mang chua duoc khoi tao!!\n(Hay chon option 2 3 4)\n");
			}
			else
			{
				printfMinimumNumber(a, n);
			}
			break;
		case 12:
			if (a == NULL)
			{
				printf("Mang chua duoc khoi tao!!\n(Hay chon option 2 3 4)\n");
			}
			else
			{
				printf("Nhap vi tri muon xoa: ");
				scanf("%d", &x);
				deleteIndex(a, n, x);
				xuatMang1Chieu(a, n);
			}
			break;
		case 13:
			if (a == NULL)
			{
				printf("Mang chua duoc khoi tao!!\n(Hay chon option 2 3 4)\n");
			}
			else
			{
				printf("Nhap vi tri muon them: ");
				scanf("%d", &k);
				printf("Nhap phan tu muon them: ");
				scanf("%d", &x);
				insertIndex(a, n, x, k);
				xuatMang1Chieu(a, n);
			}
			break;
		case 14:
			if (a == NULL)
			{
				printf("Mang chua duoc khoi tao!!\n(Hay chon option 2 3 4)\n");
			}
			else
			{
				convertEvenToHeadArray(a, n);
				xuatMang1Chieu(a, n);
			}
			break;
		case 15:
			if (a == NULL)
			{
				printf("Mang chua duoc khoi tao!!\n(Hay chon option 2 3 4)\n");
			}
			else
			{
				if (checkInterleavedArray(a, n))
				{
					printf("Mang chan le xen ke\n");
				}
				else
				{
					printf("Mang khong phai chan le xen ke!!\n");
				}
			}
			break;
		case 16:
			if (a == NULL)
			{
				printf("Mang chua duoc khoi tao!!\n(Hay chon option 2 3 4)\n");
			}
			else
			{
				printf("Nhap gia tri muon tim: ");
				scanf("%d", &x);
				result = findNumber(a, n, x);
				if (result != -1)
				{
					printf("Co gia tri %d trong mang tai vi tri %d .\n", x, result);
				}
				else
				{
					printf("Khong co gia tri %d trong mang!!\n", x);
				}
			}
			break;
		case 17:
			if (a == NULL)
			{
				printf("Mang chua duoc khoi tao!!\n(Hay chon option 2 3 4)\n");
			}
			else
			{
				intertchangeSort(a, n);
				xuatMang1Chieu(a, n);
				printf("Nhap gia tri muon tim: ");
				scanf("%d", &x);
				result = binarySearch(a, n, x);
				if (result != -1)
				{
					printf("Co gia tri %d trong mang tai vi tri %d .\n", x, result);
				}
				else
				{
					printf("Khong co gia tri %d trong mang!!\n", x);
				}
			}
			break;
		case 0:
			free(a);
			printf("\tHave a nice day sir!!");
			return 0;
		default:
			printf("Khong co su lua chon do!! ");
			break;
		}
	} while (luachon >= 0 && luachon <= 20);
	_getch();
}