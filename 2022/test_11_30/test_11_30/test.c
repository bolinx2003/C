#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 计算器

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("*********************************\n");
	printf("***** 1. Add      2. Sub  *******\n");
	printf("***** 3. Mul      4. Div  *******\n");
	printf("***** 0. exit             *******\n");
	printf("*********************************\n");
}

void Cal(int(*p)(int, int))
{
	printf("请输入2个操作数:>");
	int x, y;
	scanf("%d %d", &x, &y);
	printf("计算结果是: %d\n", p(x, y));
}

void Test()
{
	int input = 0;

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Cal(Add);
			break;
		case 2:
			Cal(Sub);
			break;
		case 3:
			Cal(Mul);
			break;
		case 4:
			Cal(Div);
			break;
		case 0:
			printf("退出计算器\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
}

int main()
{
	Test();

	return 0;
}