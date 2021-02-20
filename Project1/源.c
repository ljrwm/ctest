#define _CRT_SECURE_NO_WARNING

#include <stdio.h>

//int int_cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	int arr[] = { 83,2,35,29,36,90,8 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//		if (i == sz - 1)
//		{
//			printf("\n");
//		}
//	}
//	qsort(arr, sz, sizeof(arr[0]), int_cmp);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int int_cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void _swap(void* p1, void* p2, int size)
//{
//    int i = 0;
//    for (i = 0; i < size; i++)
//    {
//        char tmp = *((char*)p1 + i);
//        * ((char*)p1 + i) = *((char*)p2 + i);
//        *((char*)p2 + i) = tmp;
//    }
//}
//void bubble(void* base, int count, int size, int(*cmp)(void*, void*))
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < count - 1; i++)
//    {
//        for (j = 0; j < count - i - 1; j++)
//        {
//            if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//            {
//                _swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//            }
//        }
//    }
//}
//int main()
//{
//    int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//    int i = 0;
//    bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}

//int my_strcmp(const char* src, const char* dest)
//{
//    int ret = 0;
//    assert(src != NULL);
//    assert(dest != NULL);
//    
//    while (!(ret = *(unsigned char*)src - *(unsigned char*)dest) && *dest)
//    {
//        ++src;
//        ++dest;
//    }
//    
//    if (ret < 0)
//    {
//        ret = -1;
//    }
//    else if (ret > 0)
//    {
//        ret = 1;
//    }
//    ​return(ret);
//}

char* my_strstr(const char* str1, const char* str2)
{
    assert(str1);
    assert(str2);

    char* cp = (char*)str1;
    char* substr = (char*)str2;
    char* s1 = NULL;

    if (*str2 == '\0')
        return NULL;

    while (*cp)
    {
        s1 = cp;
        substr = str2;
        while (*s1 && *substr && (*s1 == *substr))
        {
            s1++;
            substr++;
        }
        if (*substr == '\0')
            return cp;
        cp++;
    }
}