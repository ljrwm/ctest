#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//错误程序崩溃内存泄漏
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//数组p生命周期短；p的地址不是helloworld的首地址；
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//int main()
//{
//    int n;
//    int arr[100];
//    int i = 0;
//    int x;
//    int tmp;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    arr[n] = 0;
//    scanf("%d", &x);
//    for (i = 0; i < n; i++)
//    {
//        if (x < arr[0])
//        {
//            tmp = arr[0];
//            arr[0] = x;
//            x = tmp;
//        }
//        if ((x > arr[i]) && (x < arr[i + 1]))
//        {
//            tmp = arr[i + 1];
//            arr[i + 1] = x;
//            x = tmp;
//        }
//        arr[n] = x;
//    }
//    for (i = 0; i <=n ; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}