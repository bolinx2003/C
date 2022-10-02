#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int input = 0;
//	printf("你会好好学习吗?(1/0):>");
//	scanf("%d", &input);
//	if (1 == input)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("用电脑控制自动贩卖机卖红薯\n");
//	}
//
//	return 0;
//}

#include <stdlib.h>
#include <time.h>

//int main()
//{
//	srand((unsigned int)time(NULL));
//	int day = 0; // 学习的天数
//	while (1)
//	{
//		printf("第%d天\n", day);
//		printf("一早起来\n");
//		printf("买彩票\n");
//		// 假设中彩票的概率是1/1000
//		if (0 == rand() % 1000)
//		{
//			printf("中了500万\n");
//			break;
//		}
//		else
//		{
//			printf("没中奖\n");
//		}
//		printf("老实学习\n");
//		day++;
//		if (365 * 2 == day)
//		{
//			printf("成为大牛\n");
//			break;
//		}
//		else
//		{
//			printf("还是一个菜鸟\n");
//		}
//	}
//	printf("迎娶白富美\n");
//
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line < 20000)
//	{
//		printf("%d:敲代码\n", line);
//		line++;
//	}
//
//	if (line < 20000)
//	{
//		printf("好好学习\n");
//	}
//	else
//	{
//		printf("好offer\n");
//	}
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d %d", &num1, &num2);
//	
//	//sum = num1 + num2;
//	sum = Add(num1, num2);
//	
//	printf("sum = %d", sum);
//
//	return 0;
//}

//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	////int arr2[100] = { 0 };
//	////printf("%d\n", arr[8]);
//
//	//int i = 0;
//	//while (i < 10)
//	//{
//	//	printf("%d ", arr[i]);
//	//	i++;
//	//}
//
//	// 变长数组
//	//int n = 10;
//	//int arr[n];
//	//int i = 0;
//	//while (i < n)
//	//{
//	//	scanf("%d", arr[i]);
//	//	printf("%d ", arr[i]);
//	//	i++;
//	//}
//
//	return 0;
//}

//int main()
//{
//	//printf("%d\n", 7 / 3);
//	//printf("%f\n", 7.0 / 3);
//
//	printf("%d\n", 7 % 3);
//
//	return 0;
//}

//int main()
//{
//	int a = 0; // 初始化
//	a = 20; // 赋值
//	//a = a + 10;
//	a += 10;
//	a -= 15;
//	printf("%d\n", a);
//
//	return 0;
//}

// 写一个函数求两个整数的较大值
//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//
//	// 输入
//	scanf("%d %d", &n1, &n2);
//	// 求较大值
//	int m = get_max(n1, n2);
//	// 输出
//	printf("%d\n", m);
//
//	return 0;
//}

//int main()
//{
//	//int flag = 0;
//	//if (!flag)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	//int a = -10;
//	//int b = -a;
//	//printf("%d\n", b);
//
//	//int a = 10;
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//
//	int a = 10;
//	//int b = ++a;
//	//int b = a++;
//	//int b = --a;
//	int b = a--;
//
//	printf("a = %d, b = %d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//if (a >= 10)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	int a = 10;
//	if (10 == a)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = 4;
//	if (3 == a || 4 == b)
//	{
//		printf("hehe\n");
//	}
//
//	//if (3 == a && 4 == b)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 6;
//	int m = 0;
//
//	//if (a > b)
//	//{
//	//	m = a;
//	//}
//	//else
//	//{
//	//	m = b;
//	//}
//
//	m = a > b ? a : b;
//
//	printf("%d\n", m);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 20;
//	int c = 0;
//	int d = (a -= 3, b += a, c = a - b, b = a - 4);
//	printf("d = %d\n", d);
//
//	return 0;
//}

//int main()
//{
//	// auto可省略
//	auto int a = 0;
//
//	return 0;
//}

//unsigned int num = 10;
//typedef unsigned int uint;
//uint num2 = 10;

//int main()
//{
//	int num1 = 10;
//	register int num2 = 20;
//
//	return 0;
//}

//void test()
//{
//	static int a = 5;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}