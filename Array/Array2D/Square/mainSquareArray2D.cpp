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
				printf("Ma tran sau khi sap xep Zic-Zac la:\n");
				sortZicZac(a, m);
				Output(a, m);
			}
			break;
			case 5:
				//ghi file
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


