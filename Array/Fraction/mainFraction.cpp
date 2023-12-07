//#include"PhanSo.h"
//
//int main()
//{
//	int n, luachon;
//	PS* a = NULL;
//	const char *f = "MangPhanSo.txt";// khai báo cái biến file
//	do
//	{
//		menu();
//		printf("Nhap lua chon bai muon lam: ");
//		scanf("%d", &luachon);
//		switch (luachon)
//		{
//		case 1:
//			Input(a, n);
//			Output(a, n);
//			break;
//
//		case 2:
//			createRandomArrayFraction(a, n);
//			Output(a, n);
//			break;
//		case 3:
//			getFracArrayInFile(f, a, n);// đọc file
//			Output(a, n);
//			break;
//		case 4:
//			if (a == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2 3 )\n");
//			}
//			else
//			{
//				getNumberatorGreaterDenomiator(a, n);
//			}
//			break;
//		case 5:
//			if (a == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2 3 )\n");
//			}
//			else
//			{
//				updateEasyFrac(a, n);
//				Output(a, n);
//			}
//			
//			break;
//		case 6:
//			if (a == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2 3 )\n");
//			}
//			else
//			{
//				getTimeFrac(a, n);
//			}
//			break;
//		case 7:
//			if (a == NULL)
//			{
//				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2 3 )\n");
//			}
//			else
//			{
//				findMaxNumber(a, n);
//			}
//			break;
//		case 0:
//			printf("\tHave a nice day sir!!");
//			return 0;
//		default:
//			printf("Khong co su lua chon do!!\n ");
//			break;
//		}
//
//	} while (luachon >= 0 && luachon <= 7);
//	_getch();
//}
