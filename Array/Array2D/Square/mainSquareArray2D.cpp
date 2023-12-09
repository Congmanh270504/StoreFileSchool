#include"SquareArray2D.h"	
int main()
{
	int** a = NULL;
	int m, choose, sum, k, checkreturn, secondchoose;
	const char* fi = "input-Array2DSquare.txt";
	const char* fo = "output-Array2DSquare.txt";


	menu();
	do
	{
		printf("Nhap bai muon lam: ");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			printf("Nhap so dong t: ");
			scanf("%d", &m);

			Input(a, m);
			Output(a, m);
			break;
		case 2:
			printf("Nhap so dong t: ");
			scanf("%d", &m);
			createRandomArray2D(a, m);
			Output(a, m);
			break;
		case 3:
			readArray2DFile(fi, a, m);
			Output(a, m);
			break;
		case 4:
			if (a == NULL)
			{
				printf("Please! choose option 1,2 or 3 \n ");
			}
			else
			{
				printf("Cac phan tu tren duong cheo chinh la: ");
				getNumberMainLine(a, m);
			}
			break;
		case 5:
			if (a == NULL)
			{
				printf("Please! choose option 1,2 or 3 \n ");
			}
			else
			{
				printf("Cac phan tu  song song duong cheo chinh la:\n");
				getNumberParallelMainLine(a, m);
			}
			break;

		case 7:
			if (a == NULL)
			{
				printf("Please! choose option 1,2 or 3 \n ");
			}
			else
			{
				printf("Ma tran sau khi sap xep Zic-Zac la:\n");
				sortZicZac(a, m);
				Output(a, m);
			}
			break;
		case 8:
			if (a == NULL)
			{
				printf("Please! choose option 1,2 or 3 \n ");
			}
			else
			{
				printf("Ma tran sau khi sap xep duong cheo chinh tang dan  la:\n");
				interchangeSortMainLineIncrease(a, m);
				Output(a, m);
			}
			break;
		case 9:
			if (a == NULL)
			{
				printf("Please! choose option 1,2 or 3 \n ");
			}
			else
			{
				printf("Ma tran sau khi chan dau dong le cuoi dong la:\n");
				setArraySortFirstEvenLastOdd(a, m);
				Output(a, m);
			}
			break;
		case 10:
			if (a == NULL)
			{
				printf("Please! choose option 1,2 or 3 \n ");
			}
			else
			{
				if (checkSymmetryArray2D(a, m))
				{
					printf("Mang doi xung qua duong cheo chinh!!\n");
				}
				else
				{
					printf("Mang khong doi xung qua duong cheo chinh!!\n");
				}
			}
			break;
		case 0:
			printf("Have a nice day sir!!\n");
			freeMatrix(a, m);
			break;
		default:
			printf("Khong co su lua chon so %d!!\n", choose);
			break;
		}
	} while (choose != 0);

	getch();
}


