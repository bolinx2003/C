#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void print(int(*p)[10], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%-2d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[9][10] = { 0 };
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		int j = 0;
//		for (j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++)
//		{
//			arr[i][j] = j + 1 + 10 * i;
//		}
//	}
//
//	print(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]) / sizeof(arr[0][0]));
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1, arr2, arr3 };
//
//	int i = 0;
//	for (i = 0; i < sizeof(parr) / sizeof(parr[0]); i++)
//	{
//		int j = 0;
//		for (j = 0; j < sizeof(arr1) / sizeof(arr1[0]); j++)
//		{
//			printf("%d ", *(*(parr + i) + j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//void bubble_sort(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1; // 假设已经有序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (*(p + j) > *(p + j + 1))
//			{
//				flag = 0;
//				int tmp = *(p + j);
//				*(p + j) = *(p + j + 1);
//				*(p + j + 1) = tmp;
//			}
//		}
//		if (flag == 1)
//		{
//			return;
//		}
//	}
//}
//
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p++));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1,0,-1,-2,-3 };
//	bubble_sort(arr, sizeof(arr) / sizeof(arr[0]));
//	print(arr, sizeof(arr) / sizeof(arr[0]));
//
//	return 0;
//}