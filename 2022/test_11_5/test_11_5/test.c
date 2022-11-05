#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <limits.h>
#include <errno.h>
#include <ctype.h>

//size_t my_strlen(const char* str)
//{
//	assert(str);
//	const char* start = str;
//
//	// 找到\0
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
//	return ret;
//}
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	const char* cur = str1;
//	const char* s1 = str1;
//	const char* s2 = str2;
//
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cur;
//		}
//
//		cur++;
//	}
//
//	return NULL;
//}
//
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		// 左->右
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		// 右->左
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}

//int main()
//{
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	perror("malloc");
//	//	return 1;
//	//}
//	//int* p = (int*)calloc(10, sizeof(int));
//	//if (p == NULL)
//	//{
//	//	perror("calloc");
//	//}
//	//
//	//realloc(p, 80);
//	//
//	//
//	//free(p);
//	//p = NULL;
//
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[] = { 1,2,3,4,0x11223305 };
//	//int ret = memcmp(arr1, arr2, 18);
//	//printf("%d\n", ret);
//
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//memset(arr, 0, 20);
//
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//my_memmove(arr + 2, arr, 20);
//	//int i = 0;
//	//for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	//int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr2[5] = { 0 };
//	//my_memcpy(arr2, arr1, sizeof(arr2));
//	//int i = 0;
//	//for (i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
//	//{
//	//	printf("%d ", arr2[i]);
//	//}
//
//	//putchar(toupper('b'));
//
//	//if (isupper('C'))
//	//{
//	//	printf("upper\n");
//	//}
//
//	//int* p = (int*)malloc(LLONG_MAX);
//	//if (p == NULL)
//	//{
//	//	//printf("%s\n", strerror(errno));
//	//	perror("malloc");
//	//	return 1;
//	//}
//	//
//
//	//printf("%s\n", strerror(2));
//
//	//char arr1[] = "abcdefghhhhhhijkl";
//	//char arr2[] = "hhhijxyz";
//	//char* ret = my_strstr(arr1, arr2);
//	//if (ret == NULL)
//	//{
//	//	printf("找不到子串\n");
//	//}
//	//else
//	//{
//	//	printf("%s\n", ret);
//	//}
//
//	//char arr[] = "abc@def.ghi*jkl.mnopqrst";
//	//char buf[50] = { 0 };
//	//strcpy(buf, arr);
//	//char* tmp = NULL;
//	//for (tmp = strtok(buf, "@.*"); tmp != NULL; tmp = strtok(NULL, "@.*"))
//	//{
//	//	printf("%s\n", tmp);
//	//}
//
//	//int ret = strncmp("abcdefg", "abcq", 4);
//	//printf("%d\n", ret);
//
//	//char arr1[30] = "abc\0XXXXXXXXXXXXXXXXX";
//	//char arr2[] = "def";
//	//strncat(arr1, arr2, 5);
//
//	//char arr1[30] = "XXXXXXXXXXXXXXXXXXXXX";
//	//char arr2[] = "abc";
//	//strncpy(arr1, arr2, 5);
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
//	//char arr[30] = "abc";
//	//printf("%s\n", strcat(arr, "def"));
//	//my_strcat(arr, "def");
//	//printf("%s\n", arr);
//
//	//char arr[30] = { 0 };
//	//printf("%s\n", my_strcpy(arr, "abcdef"));
//	//my_strcpy(arr, "abcdef");
//	//printf("%s\n", arr);
//
//	//printf("%d\n", my_strlen("abc"));
//
//	return 0;
//}