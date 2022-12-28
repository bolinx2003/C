#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// 猜数字游戏，每次生成的数字不重复

void menu()
{
	printf("**********************\n");
	printf("***** 1. play    *****\n");
	printf("***** 0. exit    *****\n");
	printf("**********************\n");
}

void game(int nums[])
{
	printf("已猜中数字: ");
	bool flag = false;
	for (int i = 0; i < 100; i++)
	{
		if (nums[i] == 1)
		{
			flag = true;
			printf("%d ", i + 1);
		}
	}
	if (!flag)
	{
		printf("无");
	}
	printf("\n");

	int rand_num = 0;
	do
	{
		rand_num = rand() % 100 + 1;
	} while (nums[rand_num - 1] == 1);

	nums[rand_num - 1] = 1;
	int guess = 0;

	while (true)
	{
		printf("猜数字:>");
		scanf("%d", &guess);
		if (guess <= 0 || guess > 100)
		{
			printf("请输入1~100之间的数字\n");
		}
		else if (guess > rand_num)
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

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	int nums[100] = { 0 };
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(nums);
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
}

int main()
{
	test();

	return 0;
}