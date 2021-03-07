#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#include <stddef.h>
//
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//struct S3
//{
//	char c1;
//	struct S1 s;
//	int i;
//};
//
//int main()
//{
//	struct S1 s1;
//	struct S2 s2;
//	struct S3 s3;
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i)); 
//	printf("%d\n", offsetof(struct S1, c2));
//	printf("%d\n", sizeof(s2));
//	printf("%d\n", sizeof(s3));
//	return 0;
//}

//#pragma pack(1)
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	struct S1 s1;
//	struct S2 s2;
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(s2));
//	return 0;
//}

//struct A
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//
//int main()
//{
//	struct A a1;
//	printf("%d", sizeof(a1));
//	return 0;
//}

//enum sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//enum RGB
//{
//	RAD,
//	GREEN,
//	BULE
//};

//int main()
//{
//    double a, c;
//    char b;
//    while (scanf("%lf%c%lf", &a, &b, &c) != EOF)
//    {
//        if (b == '+')
//        {
//            printf("%.4lf+%.4lf=%.4f\n", a, c, a + c);
//        }
//        else if (b == '-')
//        {
//            printf("%.4lf-%.4lf=%.4lf\n", a, c, a - c);
//        }
//        else if (b == '*')
//        {
//            printf("%.4lf*%.4lf=%.4lf\n", a, c, a * c);
//        }
//        else if (b == '/')
//        {
//            if (c != 0)
//            {
//                printf("%.4lf/%.4lf=%.4lf\n", a, c, a / c);
//            }
//            else
//            {
//                printf("Wrong!Division by zero!\n");
//            }
//        }
//        else
//        {
//            printf("Invalid operation!\n");
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//}