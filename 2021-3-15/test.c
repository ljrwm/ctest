#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//    int n, i;
//    scanf("%d", &n);
//    int odd = 0;
//    int even = 0;
//    for (i = 1; i <= n; i++)
//    {
//        if ((i % 2) == 1)
//        {
//            odd += 1;
//        }
//        else
//        {
//            even += 1;
//        }
//    }
//    printf("%d %d", odd, even);
//    return 0;
//}

//int main()
//{
//    int arr[50];
//    int n, i, x, tmp;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &x);
//    if (x < arr[0])
//    {
//        tmp = arr[0];
//        arr[0] = x;
//        x = tmp;
//    }
//    for (i = 0; i < n; i++)
//    {
//        if ((x > arr[i] && x < arr[i + 1]))
//        {
//            tmp = arr[i + 1];
//            arr[i + 1] = x;
//            x = tmp;
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("%d", x);
//    return 0;
//}

//int main()
//{
//    int n, i, j, x;
//    int flag = 0;
//    int arr[50];
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &x);
//
//    for (i = 0; i < n; i++)
//    {
//        if (x == arr[i])
//        {
//            for (j = i; j < n; j++)
//            {
//                arr[j] = arr[j + 1];
//            }
//            flag += 1;
//            i--;
//        }
//    }
//    for (i = 0; i < n - flag; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//int main()
//{
//    int n, x, i, j, k;
//    int flag = 0;
//    int arr[1000];
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        x = arr[i];
//        for (j = i + 1; j < n - flag; j++)
//        {
//            if (arr[j] == x)
//            {
//                for (k = j; k < n - flag; k++)
//                {
//                    arr[k] = arr[k + 1];
//                }
//                flag += 1;
//                j--;
//            }
//        }
//    }
//    for (i = 0; i < n - flag; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//#include <stdlib.h>
//
//int cmpfun(const void* a, const void* b)
//{
//    return (*(int*)a - *(int*)b);
//}
//
//int main()
//{
//    int i, n, m;
//    scanf("%d %d", &n, &m);
//    int* p1 = (int*)malloc(sizeof(int) * n);
//    int* p2 = (int*)malloc(sizeof(int) * m);
//    int* p = (int*)malloc(sizeof(int) * (m + n));
//    if (p == NULL)
//    {
//        printf("p1ÄÚ´æ¿ª±ÙÊ§°Ü");
//    }
//    else
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            scanf("%d", (p1 + i));
//        }
//    }
//    if (p == NULL)
//    {
//        printf("p2ÄÚ´æ¿ª±ÙÊ§°Ü");
//    }
//    else
//    {
//        int i = 0;
//        for (i = 0; i < m; i++)
//        {
//            scanf("%d", (p2 + i));
//        }
//    }
//    if (p == NULL)
//    {
//        printf("pÄÚ´æ¿ª±ÙÊ§°Ü");
//    }
//    else
//    {
//        for (i = 0; i < n; i++)
//        {
//            *(p + i) = *(p1 + i);
//        }
//        for (i = 0; i < m; i++)
//        {
//            *(p + n + i) = *(p2 + i);
//        }
//    }
//    qsort(p, (m + n), sizeof(int), cmpfun);
//
//    for (i = 0; i < (n + m); i++)
//    {
//        printf("%d ", *(p + i));
//    }
//    free(p1);
//    free(p2);
//    free(p);
//    return 0;
//}