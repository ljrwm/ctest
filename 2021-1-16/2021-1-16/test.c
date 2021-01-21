#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 100; i = i + 2)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int a, b, c,t;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//}

//int main()
//{
//	int m, n, r;
//	scanf("%d %d", &m, &n);
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d", n);
//	return 0;
//}

//int main()
//{
//	int i;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include <math.h>
//int main()
//{
//	int i , j ;
//	for (i = 101; i <= 200; i = i + 2)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i; 
//	int add = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//			add += 1;
//	}
//	printf("%d", add);
//	return 0;
//}

//int main()
//{
//	int i;
//	float add = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 != 0)
//		{
//			add = add + (1.00 / i);
//		}
//		else
//		{
//			add = add - (1.00 / i);
//		}
//	}
//	printf("%f", add);
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	int max;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//int main()
//{
//	int i, j;
//	for (i = 1;i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t",j,i,i*j);
//		}
//		printf("\n");
//	}
//}

int main()
{
	int n;
	int arr[10] = {0};
	int lift, right, mid;
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &n);
	lift = 0;
	right = sizeof(arr) / sizeof(arr[0]);
	while (lift <= right)
	{
		mid = (lift + right / 2);
		if (arr[mid] > n)
		{
			right = mid-1;
		}
		else if (arr[mid] < n)
		{
			lift = mid+1;
		}
		if (arr[mid] = n)
		{
			printf("%d", mid);
			break;
		}
	}
	if (lift > right)
	{
		printf(" ’“≤ªµΩ");
	}
	return 0;
}