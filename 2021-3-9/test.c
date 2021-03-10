#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf(" ÄÚ´æ¿ª±ÙÊ§°Ü");
//	}
//	else
//	{
//		for ( i = 0; i < 10; i++)
//		{
//			*(p+i) = i;
//		}
//		for ( i = 0; i < 10; i++)
//		{
//			printf("%d", *(p+i));
//		}
//	}
//	free(p);
//	p = NULL;
//}

//int main()
//{
//
//	int i = 0;
//	int* p = (int*)calloc(10,sizeof(int));
//	if (p == NULL)
//	{
//		printf(" ÄÚ´æ");
//	}
//	else
//	{
//		for (i = 0; i < 10; i++)
//		{
//		printf("%d ", *(p + i));
//		}
//		printf("\n");
//	}
//	int* ptr=(int*)realloc(p,80);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//}
