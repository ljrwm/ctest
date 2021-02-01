#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p) [10] = &arr;
//	int i = 0;
//	for (i = 0; i< 10; i ++ )   
//	{
//		printf("%d", (*p)[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i, j;
//	for (i = 0; i < 10;i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			int left = 0;
//			int right = i;
//			arr[i][left] = 1;
//			arr[i][right] = 1;
//			if (i >= 2 && j > 0 && j < i)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer is %c", killer);
//		}
//	}
//	return 0;
//}

int main()
{
	int a, b, c, d, e;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if ((b == 2) + (a == 3) == 1 &&
							(b == 2) + (e == 4) == 1 &&
							(c == 1) + (d == 2) == 1 &&
							(c == 5) + (d == 3) == 1 &&
							(e == 4) + (a == 1) == 1 )
							if (a*b*c*d*e==120)
							{
								printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
							}
					}
				}
			}	
		}
	}
	return 0;
}
