#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int arr[3][5] = { 0 };
//
//	int i = 0;
//	for (; i < sizeof(arr) / sizeof(arr[0]); ++i)
//	{
//		int j = 0;
//		for (; j < sizeof(arr[0]) / sizeof(arr[0][0]); ++j)
//		{
//			arr[i][j] = i * 5 + j;
//		}
//	}
//
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
//	{
//		int j = 0;
//		for (; j < sizeof(arr[0]) / sizeof(arr[0][0]); ++j)
//		{
//			printf("%-2d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { 0 };
//
//	int i = 0;
//	for (; i < sizeof(arr) / sizeof(arr[0]); ++i)
//	{
//		int j = 0;
//		for (; j < sizeof(arr[0]) / sizeof(arr[0][0]); ++j)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//
//	printf("arr = %p\n", arr);
//	printf("arr + 1 = %p\n", arr + 1);
//
//	printf("&arr[0] = %p\n", &arr[0]);
//	printf("&arr[0] + 1 = %p\n", &arr[0] + 1);
//
//	printf("&arr = %p\n", &arr);
//	printf("&arr + 1 = %p\n", &arr + 1);
//
//	printf("sizeof(arr) = %d\n", sizeof(arr));
//
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (; i < sz - 1; ++i)
//	{
//		// 一趟冒泡排序
//		int flag = 1; // 假设已经有序
//		int j = 0;
//		for (; j < sz - 1 - i; ++j)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;
//				// 交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//
//		if (1 == flag)
//			return;
//	}
//}

//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	// 冒泡排序
//	bubble_sort(arr, sz);
//
//	int i = 0;
//	for (; i < sz; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

#include <stdlib.h>
#include <time.h>

//int test_bubble_sort()
//{
//	srand((unsigned int)time(NULL));
//
//	const int sz = 100; // 数组元素个数
//	int* arr = (int*)malloc(sz * sizeof(int));
//	if (NULL == arr)
//	{
//		perror("test_bubblesort::malloc");
//		return 0;
//	}
//
//	int i = 0;
//	for (; i < 1000; ++i)
//	{
//		// 生成随机数组
//		int j = 0;
//		for (; j < sz; ++j)
//		{
//			arr[j] = rand();
//		}
//
//		// 冒泡排序
//		bubble_sort(arr, sz);
//
//		// 检验排序是否成功
//		for (j = 0; j < sz - 1; ++j)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				free(arr);
//				return 0; // 排序失败
//			}
//		}
//	}
//
//	free(arr);
//	return 1; // 检验成功
//}
//
//int main()
//{
//	int ret = test_bubble_sort();
//	if (1 == ret)
//		printf("检验成功\n");
//	else
//		printf("检验失败\n");
//
//	return 0;
//}

