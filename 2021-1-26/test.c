#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#include <time.h>
//
//void menu()
//{
//	printf("********************************\n");
//	printf("*******     1. play      *******\n");
//	printf("*******     0. exit      *******\n");
//	printf("********************************\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int num = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &num);
//		if (num == ret)
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//		else if (num > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜小了\n");
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int a, b, c ;
//	int i = 0;
//	int add = 0;
//	scanf("%d%d", &a, &b);
//	c = a ^ b;
//	for (i = 0; i < 32; i++)
//	{
//		if ((c >> i) & 1)
//		{
//			add += 1;
//		}
//	}
//	printf("%d", add);
//	return 0;
//}

//int main()
//{
//	int a,m,n,mn;
//	int i = 0;
//	scanf("%d", &a);
//	for (i = 30; i >= 0; i-=2)
//	{
//		m = (a >> i) & 1;
//		printf("%d", m);
//	}
//	printf("\n");
//	for (i = 31; i > 0; i-=2)
//	{
//		n = (a >> i) & 1;
//		printf("%d", n);
//	}
//	printf("\n"); 
//	for (i = 31; i >=0; i--)
//	{
//		mn = (a >> i) & 1;
//		printf("%d", mn);
//	}
//	return 0;
//}

int main()
{
	int a ;
	int i = 0;
	int add = 0;
	scanf("%d", &a);
	for (i = 0; i < 32; i++)
	{
		if ((a >> i) & 1)
		{
			add += 1;
		}
	}
	printf("%d", add);
	return 0;
}