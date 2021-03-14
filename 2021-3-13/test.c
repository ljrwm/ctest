#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#include <math.h>
//
//int main()
//{
//    int n, i, j;
//    int flag = 1;
//    int add = 0;
//    scanf("%d", &n);
//    for (i = 2; i <= n; i++)
//    {
//        flag = 1;
//        for (j = 2; j <= sqrt(i); j++)
//        {
//            if ((i % j) == 0)
//            {
//                flag = 0;
//            }
//        }
//        if (flag)
//        {
//            printf("%d ", i);
//            add += 1;
//        }
//    }
//    printf("\n%d", n - add - 1);
//    return 0;
//}

//#include<string.h>
//
//int main()
//{
//    char name[] = "admin";
//    char password[] = "admin";
//    char input1[100];
//    char input2[100];
//    while (scanf("%s%s", &input1, &input2) != EOF)
//    {
//        if ((strcmp(input1, name) == 0) && (strcmp(input2, password) == 0))
//        {
//            printf("Login Success!\n");
//        }
//        else
//        {
//            printf("Login Fail!\n");
//        }
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int i;
//    int n = 0;
//    for (i = 1; i <= 2019; i++)
//    {
//        int j = i;
//        while (j)
//        {
//            if ((j % 10) == 9)
//            {
//                n += 1;
//                break;
//            }
//            j = j / 10;
//        }
//    }
//    printf("%d", n);
//}

enum
{
	Sunday = 1,
	Monday, Tuesday, Wednesday, Thurday, Friday, Saturday
};

int main()
{
	int a, b, c, d, e, f, g;
	for (a = Sunday; a <= Saturday; a++)
	{
		for (b = Sunday; b <= Saturday; b++)
		{
			for (c = Sunday; c <= Saturday; c++)
			{
				for (d = Sunday; d <= Saturday; d++)
				{
					for (e = Sunday; e <= Saturday; e++)
					{
						for (f = Sunday; f <= Saturday; f++)
						{
							for (g = Sunday; g <= Saturday; g++)
							{
								if ((a == (c + 1)) && (d == (e + 2)) &&
									(b == (g - 3))
									&& ((f > b) && (f < c) && (f == 4) ||
										((f > c) && (f < b) && (f == 4)))
									&& ((a * b * c * d * e * f * g) == (1 * 2 * 3 * 4 * 5 * 6 * 7)))
								{
									printf("%d %d %d %d %d %d %d", a, b, c, d, e, f, g);
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}