#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//#include <math.h>
//
//int is_prime(int m)
//{
//	int i = 0;
//	int flag = 1 ;
//	for (i = 2; i <= sqrt(m); i++)
//	{
//		if (m % i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	return flag;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//}

//int binary_search(int *arr,int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid;
//	while (left <= right)
//	{
//		mid = left + (right - left);
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] = k)
//		{
//			return mid;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//}
//
//
//
//int main()
//{
//	//有序的
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = (sizeof(arr) / sizeof(arr[0]));
//	//二分查找的
//	//找到了，返回下标
//	//找不到，返回 -1
//	int ret = binary_search(arr, k, sz );
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}

//void swap(int* pa, int* pb)
//{
//	int t = *pa;
//	*pa = *pb;
//	*pb = t;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

//void mul(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	mul(n);
//	return 0;
//}

//int main()
//{
//    int arr[7] = { 0 };
//    int i = 0;
//    int max, min;
//    int add = 0;
//    float grade = 0;
//    for (i = 0; i < 7; i++)
//    {
//        scanf("%d", &arr[i]);
//        add += arr[i];
//    }
//    if (arr[0] <= arr[1])
//    {
//        max = arr[1];
//        min = arr[0];
//    }
//    else
//    {
//        max = arr[0];
//        min = arr[1];
//    }
//    for (i = 2; i <= 6; i++)
//    {
//        if (arr[i] < min)
//        {
//            min = arr[i];
//        }
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }
//    grade = (add - min - max) / 5.0;
//    printf("%.2f", grade);
//    return 0;
//}

int day(int m, int n)
{
    if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12)
        return 31;
    else if (n == 2)
    {
        if (m % 4 == 0 && m % 100 != 0 || m % 400 == 0)
            return 29;
        else
            return 28;
    }
    else
        return 30;
}

int main()
{
    int year;
    int month;
    whlie(scanf("%d%d", &year, &month) != EOF)
    {
        printf("%d", day(year, month));
    }
    return 0;
}