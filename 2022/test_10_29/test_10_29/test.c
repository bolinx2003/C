#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	// 函数地址
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	// 函数指针
//	int (*pf)(int, int) = Add;
//	int ret = (*Add)(2, 3);
//	printf("%d\n", ret);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}

//int main()
//{
//	int (*pf[])(int, int) = { Add, Sub, Mul, Div };
//	int sz = sizeof(pf) / sizeof(pf[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int ret = pf[i](8, 2);
//		printf("%d\n", ret);
//	}
//
//	return 0;
//}

// 写一个计算器 - 代码冗余
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("******************************\n");
//	printf("***** 1. add   2. sub    *****\n");
//	printf("***** 3. mul   4. div    *****\n");
//	printf("***** 0. exit            *****\n");
//	printf("******************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

// 使用函数指针数组实现计算器
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("******************************\n");
//	printf("***** 1. add   2. sub    *****\n");
//	printf("***** 3. mul   4. div    *****\n");
//	printf("***** 0. exit            *****\n");
//	printf("******************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	// 转移表
//	int (*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div };
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误，重新选择\n");
//		}
//	} while (input);
//
//	return 0;
//}