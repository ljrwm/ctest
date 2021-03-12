#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//    int n, i, j;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i + j == n - 1)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int n, i, j;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if ((i == j) || (i + j == n - 1))
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int n, i, j;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if ((i == 0) || (i == n - 1))
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    if ((j == 0) || (j == n - 1))
//                    {
//                        printf("* ");
//                    }
//                    else
//                    {
//                        printf("  ");
//                    }
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int n, i, j;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if ((j == 0) || (j == i) || (i == n - 1))
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//int main()
//{
//    float arr[5] = { 0 };
//    float x = 0;
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%f", &arr[i]);
//        x += arr[i];
//    }
//    printf("%.2f", (x / 5.0));
//    return 0;
//}

//int main()
//{
//    int a;
//    scanf("%d", &a);
//    if (a >= 10)
//    {
//        printf("Danger++");
//    }
//    else if (a >= 4)
//    {
//        printf("Danger");
//    }
//    else if (a >= 0)
//    {
//        printf("Good");
//    }
//    return 0;
//}

//int main()
//{
//    int ret = 0;
//    while (scanf("%d", &ret) != EOF)
//    {
//        switch (ret)
//        {
//        case 200:
//            printf("OK\n");
//            break;
//        case 202:
//            printf("Accepted\n");
//            break;
//        case 400:
//            printf("Bad Request\n");
//            break;
//        case 403:
//            printf("Forbidden\n");
//            break;
//        case 404:
//            printf("Not Found\n");
//            break;
//        case 500:
//            printf("Internal Server Error\n");
//            break;
//        case 502:
//            printf("Bad Gateway\n");
//            break;
//        }
//    }
//    return 0;
//}

int main()
{
    int n, i, j;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d", j);
            }
            printf("\n");
        }
    }
    return 0;
}