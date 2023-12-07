//#include"MixedArray.h"
//
//
//int main()
//{
//	HS* b = NULL;
//	HS findHS;
//	const char* fi = "input-MixedArray.txt";
//	const char* fo = "output-MixedArray.txt";
//	int n, x, y, choose, secondChoose, check, checkresult;
//	int test;
//	float result;
//	do
//	{
//		menu();
//		printf("Nhap lua chon bai muon lam: ");
//		scanf("%d", &choose);
//		
//		switch (choose)
//		{
//
//		case 1:
//			Input(b, n);
//			Output(b, n);
//			break;
//		case 2:
//			readMixedFile(fi, b, n);
//			Output(b, n);
//			break;
//		case 3:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 )\n");
//			}
//			else
//			{
//				printf("Nhap vi tri muon so sanh: ");
//				scanf("%d %d", &x, &y);
//				compareMixedNumber(b, n, x, y);
//			}
//			break;
//		case 4:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 )\n");
//			}
//			else
//			{
//				printf("Mang Hon so sau khi chuyen thanh Phan so: ");
//				getConvertMixToFracArray(b, n);
//				getFracArray(b, n);
//			}
//			break;
//		case 5:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 )\n");
//			}
//			else
//			{
//				printf("Mang Phan so sau khi chuyen thanh Hon so: ");
//				getConvertFracToMixArray(b, n);
//				Output(b, n);
//			}
//			break;
//		case 6:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 )\n");
//			}
//			else
//			{
//				printf("Cac tong hieu tich thuong cua 2 hon so: ");
//				printf("\nChon vi tri: ");
//				scanf("%d %d", &x, &y);
//				if (check == 1)
//				{
//					getAllResultMixedNumber(b, x, y);
//				}
//				else
//				{
//
//					printf("Cac tong hieu tich thuong cua 2 hon so: \n");
//					getConvertMixToFrac(b[x]);
//					getEasyFrac(b[x]);
//					getConvertMixToFrac(b[y]);
//					getEasyFrac(b[y]);
//					getAllResultMixedNumber(b, x, y);
//				}
//			}
//			break;
//		case 7:
//			printf("Mang sau khi duoc sap xep: ");
//			interchangeSortIncrease(b, n);
//			printf("\n");
//			Output(b, n);
//			break;
//		case 8:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2)\n");
//			}
//			else
//			{
//
//				printf("Nhap Hon so muon tim: \n");
//				printf("Nhap so nguyen: \n");
//				scanf("%d", &findHS.nguyen);
//
//				printf("Nhap tu so: \n");
//				scanf("%d", &findHS.ps.tu);
//
//				printf("Nhap mau so: \n");
//				scanf("%d", &findHS.ps.mau);
//
//				findMixedNumber(b, n, findHS);
//			}
//			break;
//
//		case 9:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2)\n");
//			}
//			else
//			{
//				sortEvenFirstOddSecond(b, n);
//			}
//			break;
//		case 10:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2)\n");
//			}
//			else
//			{
//				interchangeSortIncrease(b, n);
//				Output(b, n);
//				printf("Nhap Hon so muon tim: \n");
//				printf("Nhap so nguyen: ");
//				scanf("%d", &findHS.nguyen);
//
//				printf("Nhap tu so: ");
//				scanf("%d", &findHS.ps.tu);
//
//				printf("Nhap mau so: ");
//				scanf("%d", &findHS.ps.mau);
//				result = mixToFracNumber(findHS);
//				checkresult = findWithBinarySearchIncrease(b, n, result);
//				if (checkresult != -1)
//				{
//					printf("Co HS %d*%d/%d tai vi tri thu %d\n", findHS.nguyen, findHS.ps.tu, findHS.ps.mau, checkresult);
//				}
//				else
//				{
//					printf("Khong co HS %d*%d/%d trong mang!!\n", findHS.nguyen, findHS.ps.tu, findHS.ps.mau);
//				}
//			}
//			break;
//		case 11:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2)\n");
//			}
//			else
//			{
//				interchangeSortDecrease(b, n);
//				Output(b, n);
//				printf("Nhap Hon so muon tim: \n");
//				printf("Nhap so nguyen: ");
//				scanf("%d", &findHS.nguyen);
//
//				printf("Nhap tu so: ");
//				scanf("%d", &findHS.ps.tu);
//
//				printf("Nhap mau so: ");
//				scanf("%d", &findHS.ps.mau);
//				result = mixToFracNumber(findHS);
//				checkresult = findWithBinarySearchDecrease(b, n, result);
//				if (checkresult != -1)
//				{
//					printf("Co HS %d*%d/%d tai vi tri thu %d\n", findHS.nguyen, findHS.ps.tu, findHS.ps.mau, checkresult);
//				}
//				else
//				{
//					printf("Khong co HS %d*%d/%d trong mang!!\n", findHS.nguyen, findHS.ps.tu, findHS.ps.mau);
//				}
//			}
//			break;
//		case 12:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2)\n");
//			}
//			else
//			{
//				devideMixedArray(b, n);
//			}
//			break;
//		case 13:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2)\n");
//			}
//			else
//			{
//
//				printf("Nhap phan tu muon xoa: ");
//				scanf("%d", &x);
//				deleteIndex(b, n, x);
//				Output(b, n);
//			}
//			break;
//		case 20:
//			if (b == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2)\n");
//			}
//			else
//			{
//				do
//				{
//					menu2();
//					printf("Chon kieu ghi File: ");
//					scanf("%d", &secondChoose);
//					switch (secondChoose)
//					{
//					case 1:
//						getConvertMixToFracArray(b, n);
//						writeFileFracArray(fo, b, n);
//						printf("Ghi File than cong!!\n");
//						break;
//					case 2:
//						writeFileMixedArray(fo, b, n);
//						printf("Ghi File than cong!!\n");
//						break;
//					case 0:
//						break;
//					default:
//						printf("Khong co su lua chon do!!\n ");
//						break;
//					}
//				} while (secondChoose != 0);
//			}
//			break;
//		case 0:
//			printf("\tHave a nice day sir!!");
//			return 0;
//		default:
//			printf("Khong co su lua chon do!!\n ");
//			break;
//		}
//		choose = -1;
//
//	} while (choose !=0);
//	getch();
//}
