//#include"Array2D.h"
//int main()
//{
//	int** a = NULL;
//	int m = 0, n, choose, sum, k;
//	const char* fi = "input-Array2D.txt";
//
//
//	menu();
//	do
//	{
//		printf("Nhap bai muon lam: ");
//		scanf("%d", &choose);
//		switch (choose)
//		{
//		case 1:
//			printf("Nhap so dong t: ");
//			scanf("%d", &m);
//			printf("Nhap so cot: ");
//			scanf("%d", &n);
//			Input(a, m, n);
//			Output(a, m, n);
//			break;
//		case 2:
//			printf("Nhap so dong t: ");
//			scanf("%d", &m);
//			printf("Nhap so cot: ");
//			scanf("%d", &n);
//			createRandomArray2D(a, m, n);
//			Output(a, m, n);
//			break;
//		case 3:
//			readArray2DFile(fi, a, m, n);
//			Output(a, m, n);
//			break;
//		case 4:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				sum = getSumFirstUnitOdd(a, m, n);
//				printf("Tong cac phan tu co so dau la so le la: %d\n", sum);
//			}
//			break;
//		case 5:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				printf("Cac so hoan hao trong mang la:\n");
//				getPrefectNumberArray2D(a, m, n);
//			}
//			break;
//		case 6:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				sum = getSumAllGreater(a, m, n);
//				printf("Tong cac so lon hon tri tuyet doi cac so sau no: %d\n", sum);
//			}
//			break;
//		case 7:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				do
//				{
//					printf("Nhap dong k: ");
//					scanf("%d", &k);
//					if (k > m || k < 0)
//					{
//						printf("Khong co dong ma ban chon!!\n");
//					}
//				} while (k > m || k < 0);
//				sum = getSumRowK(a, k, n);
//				printf("Tong cac phan tu o dong %d la: %d\n", k, sum);
//			}
//			break;
//		case 8:
//			if (a == NULL)
//			{
//				printf("Please! Choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				sum = getSumBoundary(a, m, n);
//				printf("Tong cac phan tu o vi tri bien la: %d\n", sum);
//			}
//			break;
//		case 0:
//			deleteArray(a, m);
//			printf("HAVE A NICE DAY SIR!!\n");
//			break;
//		default:
//			printf("Khong co su lua chon so %d!!\n", choose);
//			break;
//		}
//	} while (choose != 0);
//	getch();
//}
