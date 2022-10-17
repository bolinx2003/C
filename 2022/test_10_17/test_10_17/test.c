#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc + 1);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	char* p = (int*)arr;
//
//	int i = 0;
//	for (; i < 40; ++i)
//	{
//		*p = 'x';
//		++p;
//	}
//
//	//int* p = arr;
//
//	//int i = 0;
//	//for (; i < 10; ++i)
//	//{
//	//	*p = 0x11223344;
//	//	++p;
//	//}
//
//	return 0;
//}

// 模拟实现strlen
//int my_strlen(char* str)
//{
//	char* start = str;
//	// 找\0
//	while (*str)
//	{
//		++str;
//	}
//	return str - start;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		++count;
//		++str;
//	}
//	return count;
//}
//
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
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

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int i = 0;
//	for (; i < sz; ++i)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//int main()
//{
//	int data1[] = { 1,2,3,4,5 };
//	int data2[] = { 2,3,4,5,6 };
//	int data3[] = { 3,4,5,6,7 };
//
//	int* arr[] = { data1, data2, data3 };
//	int i = 0;
//	for (; i < sizeof(arr) / sizeof(arr[0]); ++i)
//	{
//		int j = 0;
//		for (; j < sizeof(data1) / sizeof(data1[0]); ++j)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6}, {3,4,5,6,7} };
//	int i = 0;
//	for (; i < sizeof(arr) / sizeof(arr[0]); ++i)
//	{
//		int j = 0;
//		for (; j < sizeof(arr[0]) / sizeof(arr[0][0]); ++j)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	// 方式一
//	int* p = arr;
//	int i = 0;
//	for (; i < sz; ++i)
//	{
//		printf("%d ", *p++);
//	}
//	printf("\n");
//
//	// 方式二
//	p = arr;
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//
//	// 方式三
//	for (p = arr; p < &arr[sz]; ++p)
//	{
//		printf("%d ", *p);
//	}
//	printf("\n");
//
//	// 用下标访问
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

