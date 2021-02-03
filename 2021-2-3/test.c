#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//void left_exchange(char* arr, int k)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for(i = 0; i < k ; i++ )
//	{
//		tmp = arr[0];
//		for (j = 0; j < 3; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[j] = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = { "ABCD" };
//	int k;
//	scanf("%d", &k);
//	while (1)
//	{
//		if (k > 4)
//		{
//			k = k % 4;
//		}
//		else
//		{
//			break;
//		}
//	}
//	left_exchange(arr, k);
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//#include <string.h>
//
//int left_exchange(char* arr1,char* arr2,int l)
//{
//	int i = 0;
//	int k = 0;
//	int tmp = 0;
//	for (k = 0; k < l; k++)
//	{
//		if (strcmp(arr1,arr2)==0)
//		{
//			return 1;
//		}
//		else
//		{
//			tmp = arr1[0];
//			for (i = 0; i < l; i++)
//			{
//				arr1[i] = arr1[i + 1];
//			}
//			arr1[l-1] = tmp;
//		}
//	}
//	if (k == l)
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr1[] = { "abcdef" };
//	char arr2[] = { "cdefab" };
//	printf("%s\n%s\n", arr1, arr2);
//	int l = strlen(arr1) / sizeof(arr1[0]);
//	if (left_exchange(arr1,arr2,l))
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}

int find(int a[][3], int x, int y, int f) 
{
	int i = 0, j = x - 1; 

	while (j >= 0 && i < y)
	{
		if (a[i][j] < f) 
		{
			i++;
		}
		else if (a[i][j] > f) 
		{
			j--;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int a[][3] = { {1, 3, 5},
				  {3, 5, 7},
				  {5, 7, 9} }; 
	int k=0;
	scanf("%d", &k);
	if (find(a, 3, 3, k))
	{
		printf("found!\n");
	}
	else
	{
		printf("hasn't  found!\n");
	}
	return 0;
}
