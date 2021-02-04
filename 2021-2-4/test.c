#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<assert.h>

//char* my_strstr(const char* str1, const char* str2)
//{
//    assert(str1);
//    assert(str2);
//
//    char* cp = (char*)str1;
//    char* substr = (char*)str2;
//    char* s1 = NULL;
//
//    if (*str2 == '\0')
//        return NULL;
//
//    while (*cp)
//    {
//        s1 = cp;
//        substr = str2;
//        while (*s1 && *substr && (*s1 == *substr))
//        {
//            s1++;
//            substr++;
//        }
//        if (*substr == '\0')
//            return cp;
//        cp++;
//    }
//}

//char* my_strcat(char* arr1, const char* arr2)
//{
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//
//	char* ret = arr1;
//
//	while (*arr1)
//	{
//		arr1++;
//	}
//	while ((*arr1++ = *arr2++))
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[10] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//char* my_strcpy(char* arr1, const char* arr2)
//{
//	char* ret = arr1;
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//
//	while ((*arr1++ = *arr2++))
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "***********";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//int my_strlen (const char*  arr)
//{
//	int count = 0;
//	while (*arr++)
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello";
//	int n = my_strlen(arr);
//	printf("%d", n);
//	return 0;
//}

