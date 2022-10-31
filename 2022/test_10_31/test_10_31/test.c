#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char** cp[] = { c + 3, c + 2, c + 1, c };
//	char*** cpp = cp;
//
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//
//	return 0;
//}

#include <string.h>

// 左旋字符串
//void left_move(char* str, int k)
//{
//	int len = strlen(str);
//	int i = 0;
//	for (i = 0; i < k % len; i++)
//	{
//		// 左旋一次
//		char tmp = *str;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}

// 使用逆序实现左旋字符串
//void reverse_string(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* str, int k)
//{
//	int len = strlen(str);
//	k %= len;
//
//	// 左边k个逆序
//	reverse_string(str, str + k - 1);
//
//	// 右边len-k个逆序
//	reverse_string(str + k, str + len - 1);
//
//	// 整体逆序
//	reverse_string(str, str + len - 1);
//}
//
//int main()
//{
//	char arr[20] = "abcdefg";
//	int k = 0;
//	scanf("%d", &k);
//
//	left_move(arr, k);
//	printf("%s\n", arr);
//
//	return 0;
//}

// 杨氏矩阵查找
// 从左到右递增，从上到下递增
//void find_k(int arr[3][3], int k, int* px, int* py)
//{
//	// 右上角的数，该行最大，该列最小
//	int x = 0;
//	int y = *py - 1;
//
//	// 查找
//	while (x < *px && y >= 0)
//	{
//		// 一次查找
//		if (arr[x][y] > k)
//		{
//			// 去掉一列
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			// 去掉一行
//			x++;
//		}
//		else
//		{
//			// 找到了
//			*px = x;
//			*py = y;
//			return;
//		}
//	}
//
//	// 找不到
//	*px = -1;
//	*py = -1;
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//
//	int x = 3;
//	int y = 3;
//	find_k(arr, k, &x, &y);
//	if (x == -1 && y == -1)
//	{
//		printf("找不到了\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d %d\n", x, y);
//	}
//
//	return 0;
//}

// 打印空心三角形
//int main()
//{
//	int n = 0;
//	// 多组输入
//	//while (~scanf("%d", &n))
//	//while (scanf("%d", &n) != EOF)
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j <= i; j++)
//			{
//				if (j == 0 || i == n - 1 || i == j)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

// 打印x图案
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j || i + j == n - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

// 删除序列中的指定数字
//int main()
//{
//	int arr[] = { 11,1,2,11,3,4,11,5,6,11,11,11,7,8,9,10,11 };
//	int del = 11; // 要删除的元素
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0; // 遍历数组
//	int j = 0; // 记录可以存放数据的位置
//
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}