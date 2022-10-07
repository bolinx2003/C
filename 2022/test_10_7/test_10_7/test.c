#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 统计1~100中9的个数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			++count;
//		if (i / 10 == 9)
//			++count;
//	}
//
//	printf("count = %d\n", count);
//
//	return 0;
//}

// 计算1/1-1/2+1/3...+1/99-1/100
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + (1.0 / i) * flag;
//		flag = -flag;
//	}
//
//	printf("sum = %lf\n", sum);
//
//	return 0;
//}

// 求10个整数的最大值
//int main()
//{
//	int arr[10] = { 0 };
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//
//	printf("max = %d\n", max);
//
//	return 0;
//}

// 打印乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

