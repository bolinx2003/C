﻿#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <limits.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>
#include <stddef.h>

//size_t my_strlen(const char* str)
//{
//	assert(str);
//
//	const char* start = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//}
//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//
//	char* ret = dest;
//	// 找目标空间的\0
//	while (*dest)
//	{
//		dest++;
//	}
//	// 拷贝
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//	return ret;
//}
//
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			// 相等
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	// 不相等
//	return *s1 - *s2;
//}
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//
//	void* ret = dest;
//	if (dest < src)
//	{
//		// 前->后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		// 后->前
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* cur = str1;
//
//	while (*cur)
//	{
//		// 从cur的位置开始匹配
//		s1 = cur;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			// 找到了
//			return (char*)cur;
//		}
//
//		// 匹配不到
//		cur++;
//	}
//
//	// 找不到
//	return NULL;
//}
//
//int main()
//{
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[] = { 1,2,3,4,0x11223305 };
//	//memset(arr2, 6, sizeof(arr2));
//
//	//int ret = memcmp(arr1, arr2, 18);
//	//if (ret > 0)
//	//{
//	//	printf(">\n");
//	//}
//	//else if (ret < 0)
//	//{
//	//	printf("<\n");
//	//}
//	//else
//	//{
//	//	printf("==\n");
//	//}
//
//	//char* ret = my_strstr("abbbcdefghijklllllmnopqrst", "lllmn");
//	//if (ret == NULL)
//	//{
//	//	printf("找不到子串\n");
//	//}
//	//else
//	//{
//	//	printf("%s\n", ret);
//	//}
//
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//my_memmove(arr, arr + 2, 20);
//	//int i = 0;
//	//for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	//int arr2[5] = { 0 };
//	//my_memcpy(arr2, arr1, 20);
//	//int i = 0;
//	//for (i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
//	//{
//	//	printf("%d ", arr2[i]);
//	//}
//
//	//putchar(toupper('a'));
//
//	//if (isupper('a'))
//	//{
//	//	printf("upper\n");
//	//}
//
//	//int* p = (int*)malloc(LLONG_MAX);
//	//if (p == NULL)
//	//{
//	//	printf("%s\n", strerror(errno));
//	//	//perror("malloc");
//	//}
//
//	//char arr[] = "abc@def#ghi%jklmn";
//	//char buf[50] = { 0 };
//	//strcpy(buf, arr);
//	//char* tmp = NULL;
//	//for (tmp = strtok(buf, "@#%"); tmp; tmp = strtok(NULL, "@#%"))
//	//{
//	//	printf("%s\n", tmp);
//	//}
//
//	//int ret = strncmp("abcdefg", "abcdxxx", 4);
//	//if (ret > 0)
//	//{
//	//	printf(">\n");
//	//}
//	//else if (ret < 0)
//	//{
//	//	printf("<\n");
//	//}
//	//else
//	//{
//	//	printf("==\n");
//	//}
//
//	//char arr1[20] = "abc\0XXXXXXXXXXXXXXX";
//	//char arr2[] = "def";
//	//strncat(arr1, arr2, 3);
//
//	//char arr1[20] = "XXXXXXXXXXXXXXXXX";
//	//char arr2[] = "abcdefg";
//	//strncpy(arr1, arr2, 10);
//
//	//int ret = my_strcmp("abcdef", "abq");
//	//if (ret > 0)
//	//{
//	//	printf(">\n");
//	//}
//	//else if (ret < 0)
//	//{
//	//	printf("<\n");
//	//}
//	//else
//	//{
//	//	printf("==\n");
//	//}
//
//	//char arr1[10] = "abc";
//	//char arr2[] = "def";
//	//printf("%s\n", my_strcat(arr1, arr2));
//
//	//printf("%d\n", my_strlen("abc"));
//
//	//char arr1[] = "abc";
//	//char arr2[10] = { 0 };
//	//printf("%s\n", my_strcpy(arr2, arr1));
//
//	return 0;
//}

//struct S1
//{
//	char c1; // 1 8 -> 1
//	// 0
//	int i; // 4 8 -> 4
//	// 4~7
//	char c2; // 1 8 ->1
//	// 8
//	// 0~8 -> 9
//	// 最大：4
//	// 总：12
//};
//
//struct S2
//{
//	char c1; // 1 8 -> 1
//	// 0
//	char c2; // 1 8 -> 1
//	// 1
//	int i; // 4 8 -> 4
//	// 4~7
//	// 0~7 -> 8
//	// 最大：4
//	// 总：8
//};
//
//struct S3
//{
//	double d; // 8 8 ->8
//	// 0~7
//	char c; // 1 8 ->1
//	// 8
//	int i; // 4 8 -> 4
//	// 12~15
//	// 0~15 ->16
//	// 最大：8
//	// 总：16
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%u\n", sizeof(struct S4)); // 32
//
//	//printf("%d\n", sizeof(struct S1));
//	//printf("%d\n", sizeof(struct S2));
//	//printf("%d\n", sizeof(struct S3));
//	//printf("%u\n", offsetof(struct S3, d));
//	//printf("%u\n", offsetof(struct S3, c));
//	//printf("%u\n", offsetof(struct S3, i));
//
//	return 0;
//}