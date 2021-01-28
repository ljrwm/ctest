#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//void print(int* arr)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	print(arr);
//	return 0;
//}

//void tmp(char* arr)
//{
//    char* left = arr;
//    char* right = arr + strlen(arr) - 1;
//    while (left < right)
//    {
//        char t = *left;
//        *left = *right;
//        *right = t;
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    char arr[] = "I am a student";
//    int i = 0;
//    tmp(arr);
//    for (i = 0; i < 14; i++)
//    {
//        printf("%c", arr[i]);
//    }
//    return 0;
//}

//int main()
//{
//	int a, n, i ;
//	scanf("%d%d", &a, &n);
//	int A=0;
//	int Sn = 0;
//	for (i = 0; i < n; i++)
//	{
//		A = A * 10 + a;
//		Sn += A;
//	}
//	printf("%d", Sn);
//	return 0;
//}

//#include<math.h>
//
//int main()
//{
//	int n = 1;
//	int i = 0;
//	int add = 0;
//	int a = 0;
//	for (i = 1; i < 100000; i++)
//	{
//		add = 0;
//		n = 1;
//		a = i;
//		while (a / 10)
//		{
//			n++;
//			a = a / 10;
//		}
//		a = i;
//		while (a)
//		{
//			add += pow(a % 10, n);
//			a = a / 10;
//		}
//		if (add == i)
//		{
//			printf("%d ", add);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);
	total = money;
	empty = money;
	
	while (empty > 1)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	
	printf("%d", total);
	return 0;
}