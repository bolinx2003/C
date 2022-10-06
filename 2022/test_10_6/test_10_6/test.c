#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 把三个数从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

// 最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	// 找出较小值
//	int m = a < b ? a : b;
//
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//			break;
//
//		--m;
//	}
//
//	printf("%d\n", m);
//
//	return 0;
//}

// 辗转相除
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	scanf("%d %d", &a, &b);
//
//	while (m = a % b)
//	{
//		a = b;
//		b = m;
//	}
//
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	// 求较大值
//	int m = a > b ? a : b;
//
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)
//			break;
//
//		++m;
//	}
//
//	printf("%d\n", m);
//
//	return 0;
//}

// 最大公约数
//int get_greatest_common_divisor(int x, int y)
//{
//	int m = 0;
//	while (m = x % y)
//	{
//		x = y;
//		y = m;
//	}
//	return y;
//}

// 最小公倍数
//int get_least_common_multiple(int x, int y)
//{
//	int m = get_greatest_common_divisor(x, y);
//	return x * y / m;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int ret = get_least_common_multiple(a, b);
//	//int ret = get_greatest_common_divisor(a, b);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	scanf("%d %d", &a, &b);
//
//	for (m = a; m % b != 0; m += a)
//	{
//		;
//	}
//
//	printf("%d\n", m);
//
//	return 0;
//}

//int main()
//{
//	int count = 0;
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				++count;
//				printf("%d ", y);
//			}
//		}
//		if (y % 400 == 0)
//		{
//			++count;
//			printf("%d ", y);
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//int main()
//{
//	int count = 0;
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			++count;
//			printf("%d ", y);
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

#include <math.h>

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i < 200; i += 2)
//	{
//		int flag = 1; // 假设i是素数
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				// i不是素数
//				flag = 0;
//				break;
//			}
//		}
//		if (1 == flag)
//		{
//			// i是素数
//			printf("%d ", i);
//			++count;
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}