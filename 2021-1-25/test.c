#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//	int tmp = 0;
//	for (i = 0; i < sz - 1; i++)
//	{		
//		if (flag == 1)
//		{
//			int flag = 0;
//			for (j = 0; j < sz - 1 - i; j++)
//			{
//				if (arr[j] > arr[j + 1])
//				{
//					tmp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = tmp;
//					flag = 1;
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void init(int* arr, int sz)
//{
//	int i = 0;
//	{
//		for (i = 0; i < sz; i++)
//		{
//			arr[i] = 0;
//		}
//	}
//}
//
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//reverse(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left <= right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,3,5,7,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}

int main()
{
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int i = 0;

	printf("请输入10个数字:>");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("请输入10个数字:>");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr2[i]);
	}
	
	for (i = 0; i < 10; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}

	return 0;
}