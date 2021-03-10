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
//                printf("* ");
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
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
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
//            for (j = 0; j < n - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//    int n, i, j;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n - i - 1; j++)
//            {
//                printf("  ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//

//int main()
//{
//    int n, i, j;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i <= n; i++)
//        {
//            for (j = 0; j < n + 1 - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n\n");
//        }
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < i + 2; j++)
//            {
//                printf("* ");
//            }
//            printf("\n \n");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//int main()
//{
//    int n, i, j, k;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 1; i <= n; i++)
//        {
//            for (k = 1; k <= (n - i + 1) * 2; k++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        for (i = 0; i <= n; i++)
//        {
//            for (k = 0; k < i * 2; k++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < (n - i + 1); j++)
//            {
//                printf("*");
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
//            for (j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            printf("*");
//            for (j = 0; j < n - i - i; j++)
//            {
//                printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                if (i == j)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}