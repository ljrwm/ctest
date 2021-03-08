#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#include <string.h>
//int main()
//{
//    char arr1[100];
//    char arr2[100];
//    while (scanf("%s %s", &arr1, &arr2) != EOF)
//    {
//        if (strcmp(arr1, arr2) == 0)
//        {
//            printf("same\n");
//        }
//        else
//        {
//            printf("different\n");
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int arr[10][10];
//    int N, M;
//    int sum = 0;
//    scanf("%d %d", &N, &M);
//    int i, j;
//    for (i = 0; i < N; i++)
//    {
//        for (j = 0; j < M; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (arr[i][j] > 0)
//            {
//                sum += arr[i][j];
//            }
//        }
//    }
//    printf("%d", sum);
//    return 0;
//}

//int main()
//{
//    int a[10];
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    for (int i = 9; i >= 0; i--)
//    {
//        printf("%d ", a[i]);
//    }
//}

//int main()
//{
//    int a, b, i;
//    a = 0; b = 0;
//    int arr[10];
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (arr[i] > 0)
//        {
//            a += 1;
//        }
//        else if (arr[i] < 0)
//        {
//            b += 1;
//        }
//    }
//    printf("positive:%d\nnegative:%d", a, b);
//    return 0;
//}

//int main()
//{
//
//    int a[50];
//    int n, i;
//    int sum = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);
//        sum = sum + a[i];
//    }
//    printf("%d", sum);
//}

//int main()
//{
//    int i = 0;
//    int n = 0;
//    scanf("%d", &n);
//    int arr[10000] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    int min = 100;
//    int max = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (min > arr[i])
//        {
//            min = arr[i];
//        }
//        if (max < arr[i])
//        {
//            max = arr[i];
//        }
//    }
//
//    printf("%d\n", max - min);
//    return 0;
//}

//int main()
//{
//    int n;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    int i;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int flag = 0;
//    for (i = 0; i < n - 1; i++)
//    {
//        if (arr[i] > arr[i + 1])
//        {
//            flag = 1;
//            break;
//        }
//    }
//    if (flag)
//    {
//        printf("unsorted");
//    }
//    else
//    {
//        printf("sorted");
//    }
//    return 0;
//}

//int main()
//{
//    int n;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    int i;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int flag = 0;
//    if (arr[0] < arr[n - 1])
//    {
//        for (i = 0; i < n - 1; i++)
//        {
//            if (arr[i] > arr[i + 1])
//            {
//                flag = 1;
//                break;
//            }
//        }
//    }
//    else if (arr[0] > arr[n - 1])
//    {
//        if (arr[0] < arr[n - 1])
//        {
//            for (i = 0; i < n - 1; i++)
//            {
//                if (arr[i] > arr[i + 1])
//                {
//                    flag = 1;
//                    break;
//                }
//            }
//        }
//    }
//    else
//    {
//        for (i = 0; i < n; i++)
//        {
//            if (arr[i] != arr[0])
//            {
//                flag = 1;
//            }
//        }
//    }
//    if (flag)
//    {
//        printf("unsorted");
//    }
//    else
//    {
//        printf("sorted");
//    }
//    return 0;
//}
