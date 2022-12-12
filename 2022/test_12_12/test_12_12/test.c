#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

// 猜数字游戏（不使用scanf）

void menu()
{
	printf("*******************\n");
	printf("**** 1. play  *****\n");
	printf("**** 0. exit  *****\n");
	printf("*******************\n");
}

void guess_number()
{
	int rand_num = rand() % 100 + 1;
	char num[100] = { 0 };

	while (true)
	{
		printf("猜数字:>");
		int i = 0;
		while (true)
		{
			num[i] = getchar();
			if (num[i] == '\n')
			{
				if (i)
				{
					num[i] = '\0';
					break;
				}
			}
			else if (num[i] == EOF)
			{
				printf("输入错误\n");
				break;
			}
			else if (!isdigit(num[i]))
			{
				printf("输入错误\n");
				// 清理缓冲区
				char tmp = 0;
				while ((tmp = getchar()) != '\n')
				{
					;
				}
				break;
			}
			else
			{
				++i;
			}
		}
		if (num[i] == EOF)
			continue;

		int guess = atoi(num);
		if (guess <= 0 || guess > 100)
		{
			printf("请输入1~100之间的整数\n");
			continue;
		}

		if (guess > rand_num)
		{
			printf("猜大了\n");
		}
		else if (guess < rand_num)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	bool first_time = true; // 是否是第一次
	do
	{
		menu();
		printf("请选择:>");
		while (true)
		{
			input = getchar();
			if (input == '\n')
				continue;
			else
				break;
		}
		if (input == EOF)
			break;
		switch (input)
		{
		case '1':
			guess_number();
			break;
		case '0':
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input != '0');

	return 0;
}