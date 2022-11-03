#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <errno.h>
#include <ctype.h>
#include <assert.h>

//int main()
//{
//	char arr[] = "abc@def.123@456";
//	char buf[30] = { 0 }; // 使用strtok，一般要做备份
//	strcpy(buf, arr);
//	const char* sep = "@."; // 分隔符的集合
//
//	char* str = NULL;
//	for (str = strtok(buf, sep); str != NULL; str = strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(INT_MAX);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	return 0;
//}

//int main()
//{
//	int ret = isdigit('q');
//	printf("%d\n", ret);
//
//	return 0;
//}

//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[5] = { 0 };
//
//	//my_memcpy(arr2, arr1, 20);
//
//	return 0;
//}

// err 因为有符号无符号不匹配
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//
//	if (dest < src)
//	{
//		// 前->后
//		int i = 0;
//		for (i = 0; i < count; i++)
//		{
//			*((char*)dest + i) = *((char*)src + i);
//		}
//	}
//	else
//	{
//		// 后->前
//		int i = 0;
//		for (i = count - 1; i >= 0; i++)
//		{
//			*((char*)dest + i) = *((char*)src + i);
//		}
//	}
//
//	return ret;
//}

//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//
//	if (dest < src)
//	{
//		// 前->后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		// 后->前
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1, arr1 + 2, 20);
//	// 3 4 5 6 7 6 7 8 9 10
//	printf("arr1: ");
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//
//	int arr2[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr2 + 2, arr2, 20);
//	// 1 2 1 2 3 4 5 8 9 10
//	printf("arr2: ");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}

//int my_memcmp(const void* ptr1, const void* ptr2, size_t num)
//{
//	assert(ptr1 && ptr2);
//
//	while (num--)
//	{
//		if (*(char*)ptr1 > *(char*)ptr2)
//		{
//			return 1;
//		}
//		else if (*(char*)ptr1 < *(char*)ptr2)
//		{
//			return -1;
//		}
//		ptr1 = (char*)ptr1 + 1;
//		ptr2 = (char*)ptr2 + 1;
//	}
//
//	return 0;
//}