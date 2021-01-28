#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++; 
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}

//void my_strcpy(char* arr1, char* arr2)
//{
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abcdef";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

void swap(int* arr, int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;
	while (left < right)
	{
		if (arr[left] % 2 == 0)
		{
			while (1)
			{
				if (arr[right] % 2 != 0)
				{
					tmp = arr[left];
					arr[left] = arr[right];
					arr[right] = tmp;
					break;
				}
				right--;
			}
		}
		left++;
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	int sz = sizeof(arr) / sizeof(arr[0]);
	swap(arr, sz);
	for (int i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}