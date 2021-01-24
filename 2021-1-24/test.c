#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>

//void print(int x)
//{ 
//	if (x > 9)
//	{
//		print(x /10);
//	}
//	printf("%d ", x % 10);
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//}

//int ret(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	return n * ret(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret1 = 1;
//	int ret2 = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret1 *= i;
//	}
//	ret2 = ret(n);
//	printf("%d %d", ret1, ret2);
//}

//int str(char*arr)
//{
//	if (*arr == '\0')
//	{
//		return 0;
//	}
//	else
//		return 1 + str(1 + arr);
//}
//int main()
//{
//	char arr[] = { "abcdef"};
//	int i = 0;
//	int strlen1 = 0;
//	int strlen2 = 0;
//	for (i = 0;; i++)
//	{
//		if (arr[i]=='\0')
//		{
//			break;
//		}
//		strlen1 += 1;
//	}
//	strlen2 = str(arr);
//	printf("%d %d", strlen1, strlen2);
//}

//int DigitSum(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	return n % 10 + DigitSum(n / 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int digitsum=DigitSum(n);
//	printf("%d", digitsum);
//	return 0;
//}

//int nk(int n,int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	return n * nk(n, k - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n,&k);
//	int a = nk(n,k);
//	printf("%d", a);
//	return 0;
//}

//int Fac(int N)
//{
//    if (N < 3)
//        return 1;
//    return Fac(N - 1) + Fac(N - 2);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", Fac(n));
//}

void tmp (char* arr,int sz)
{
	char* left = arr;
	char* right = arr+sz - 1;
	while (left < right)
	{
		char t = *left;
		*left = *right;
		*right = t;
		left++;
		right--;
	}
}

int main()
{
	char arr[] = {"abcdef"};
	int sz = strlen(arr) / sizeof(arr[0]);
	int i = 0;
	tmp(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%c", arr[i]);
	}
	return 0;
}