#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//    printf("     **     \n");
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    ");
//    return 0;
//}

//int main()
//{
//    printf("0%o 0X%X", 1234, 1234);
//    return 0;
//}

//int main()
//{
//    int a = printf("Hello world!");
//    printf("\n%d\n", a);
//    printf("%d",printf("%d", printf("%d", 43)));
//    return 0;
//}

//int main()
//{
//    char a;
//    scanf("%c", &a);
//    int i, j, k;
//    for (i = 1; i <= 5; i++)
//    {
//        for (j = 0; j < 5 - i; j++)
//        {
//            printf(" ");
//        }
//        for (k = 0; k < i; k++)
//        {
//            printf("%c ", a);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//int main()
//{
//    int a, b, c;
//    scanf("%d%d", &a, &b);
//    if (a >= 100)
//    {
//        a = a % 100;
//    }
//    if (b >= 100)
//    {
//        b = b % 100;
//    }
//    c = a + b;
//    if (c >= 100)
//    {
//        c = c % 100;
//    }
//    printf("%d", c);
//    return 0;
//}

//int main()
//{
//    int t, h, m, s;
//    scanf("%d", &t);
//    h = t / 3600;
//    m = (t % 3600) / 60;
//    s = ((t % 3600) % 60);
//    printf("%d %d %d", h, m, s);
//    return 0;
//}

//int main()
//{
//    float money;
//    int month, day, a;
//    scanf("%f%d%d%d", &money, &month, &day, &a);
//    if ((month == 11 && day == 11) || (month == 12 && day == 12))
//    {
//        if (month == 11 && day == 11)
//        {
//            money = money * 0.7;
//        }
//        if (month == 12 && day == 12)
//        {
//            money = money * 0.8;
//        }
//        if (a == 1)
//        {
//            money -= 50;
//            if (money <= 0)
//            {
//                money = 0.0;
//            }
//        }
//    }
//    printf("%.2f", money);
//    return 0;
//}

//int main()
//{
//    int i;
//    for (i = 10000; i < 100000; i++)
//    {
//        if ((i / 10000) * (i % 10000) + (i / 1000) * (i % 1000) + (i / 100) + (i % 100) + (i / 10) * (i % 10) == i)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int arr[40];
//    int i, j, n, tmp;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n - i - 1; j++)
//        {
//            if (arr[j] < arr[j + 1])
//            {
//                tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

int main()
{
    char arr[100];
    int i;
    int a = 0; int b = 0;
    scanf("%s", &arr);
    for (i = 0; 1; i++)
    {
        if (arr[i] == '0')
        {
            break;
        }
        else
        {
            if (arr[i] == 'A')
            {
                a += 1;
            }
            if (arr[i] == 'B')
            {
                b += 1;
            }
        }
    }
    if (a > b)
    {
        printf("A");
    }
    else if (a == b)
    {
        printf("E");
    }
    else if (a < b)
    {
        printf("B");
    }
    return 0;
}