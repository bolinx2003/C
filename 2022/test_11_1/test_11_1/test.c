#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

// 1. 使用计数器
//size_t my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

// 2. 递归
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}

// 3. 指针-指针
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	char* begin = str;
//	// 找\0
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - begin;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "XXXXXXXXXXX";
//	char arr2[] = "abcdef";
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//
//	// 找目标空间的\0
//	while (*dest)
//	{
//		dest++;
//	}
//	// 从目标空间的\0开始，向后拷贝
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "Hello ";
//	char arr2[] = "World!";
//
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}