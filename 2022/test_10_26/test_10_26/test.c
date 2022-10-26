#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

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
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr; // 数组指针
//
//	char* arr2[5];
//	char* (*p2)[5] = &arr2;
//
//	return 0;
//}

//void print1(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}

//void print1(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//}
//
//void print1(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d ", *arr++);
//	}
//	printf("\n");
//}
//
//void print1(int(*parr)[10], int sz)
//{
//	int i = 0;
//	for (; i < sz; ++i)
//	{
//		//printf("%d ", *((*parr) + i));
//		printf("%d ", (*parr)[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print1(arr, sz);
//
//	return 0;
//}

//void print2(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (; i < r; ++i)
//	{
//		int j = 0;
//		for (; j < c; ++j)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int(*parr)[5], int r, int c)
//{
//	int i = 0;
//	for (; i < r; ++i)
//	{
//		int j = 0;
//		for (; j < c; ++j)
//		{
//			printf("%d ", *(*(parr + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6}, {3,4,5,6,7} };
//	print2(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]) / sizeof(arr[0][0]));
//
//	return 0;
//}