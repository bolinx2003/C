#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include "add.h"
// 导入静态库
//#pragma comment(lib, "add.lib")

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int sum = Add(a, b);
//
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//void test(int* pa)
//{
//	(*pa)++;
//}
//
//int main()
//{
//	int a = 0;
//	printf("a = %d\n", a);
//
//	test(&a);
//	printf("a = %d\n", a);
//
//	test(&a);
//	printf("a = %d\n", a);
//
//	test(&a);
//	printf("a = %d\n", a);
//
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//
//	print(num);
//
//	return 0;
//}

#include <string.h>

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

//int my_strlen(char* str)
//{
//	if (*str)
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
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

//int fac(int n)
//{
//	int ret = 1;
//	int i = 1;
//	for (; i <= n; ++i)
//	{
//		ret *= i;
//	}
//	return ret;
//}

//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}

//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		--n;
//	}
//
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

// 汉诺塔

////从pos1到pos2
//void move(char pos1, char pos2)
//{
//	printf("%c->%c ", pos1, pos2);
//}
//
////n为盘子个数，pos123分别是起始位置，中转位置，目标位置
//void Hanoi(int n, char pos1, char pos2, char pos3)
//{
//	if (1 == n)
//	{
//		move(pos1, pos3);
//	}
//	else
//	{
//		Hanoi(n - 1, pos1, pos3, pos2);
//		move(pos1, pos3);
//		Hanoi(n - 1, pos2, pos1, pos3);
//	}
//}
//
//int main()
//{
//	printf("1:");
//	Hanoi(1, 'A', 'B', 'C');
//	printf("\n");
//
//	printf("2:");
//	Hanoi(2, 'A', 'B', 'C');
//	printf("\n");
//
//	printf("3:");
//	Hanoi(3, 'A', 'B', 'C');
//	printf("\n");
//
//	printf("4:");
//	Hanoi(4, 'A', 'B', 'C');
//	printf("\n");
//
//	return 0;
//}

