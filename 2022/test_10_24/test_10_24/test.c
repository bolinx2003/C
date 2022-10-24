#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define ROCK 0
#define SCISSORS 1
#define PAPER 2

#define TIE 0
#define PLAYER_WIN 1
#define COMPUTER_WIN 2

void menu()
{
	printf("**************************\n");
	printf("****** 1. play       *****\n");
	printf("****** 0. exit       *****\n");
	printf("**************************\n");
}

int PlayerMove()
{
	char input[100] = { 0 };
	while (1)
	{
		printf("玩家出拳:>");
		scanf("%s", input);
		if (strcmp(input, "石头") == 0 || strcmp(input, "shitou") == 0 || strcmp(input, "rock") == 0 || strcmp(input, "stone") == 0)
		{
			return ROCK;
		}
		else if (strcmp(input, "剪刀") == 0 || strcmp(input, "jiandao") == 0 || strcmp(input, "scissors") == 0 || strcmp(input, "shears") == 0 || strcmp(input, "clippers") == 0)
		{
			return SCISSORS;
		}
		else if (strcmp(input, "布") == 0 || strcmp(input, "bu") == 0 || strcmp(input, "paper") == 0 || strcmp(input, "cloth") == 0 || strcmp(input, "textile") == 0)
		{
			return PAPER;
		}
		else
		{
			printf("输入错误，重新输入\n");
		}
	}
}

int ComputerMove()
{
	printf("电脑出拳:>");
	int ret = rand() % 3;
	if (ret == ROCK)
	{
		printf("石头\n");
	}
	else if (ret == SCISSORS)
	{
		printf("剪刀\n");
	}
	else
	{
		printf("布\n");
	}
	return ret;
}

int IsWin(int playerRet, int computerRet)
{
	if (playerRet == computerRet)
	{
		return TIE;
	}
	else if (playerRet == ROCK && computerRet == SCISSORS)
	{
		return PLAYER_WIN;
	}
	else if (playerRet == SCISSORS && computerRet == PAPER)
	{
		return PLAYER_WIN;
	}
	else if (playerRet == PAPER && computerRet == ROCK)
	{
		return PLAYER_WIN;
	}
	else
	{
		return COMPUTER_WIN;
	}
}

void game()
{
	printf("五局三胜\n");
	int i = 0;
	int playerWinCount = 0;
	int computerWinCount = 0;
	int gameCount = 1;
	int flag = 0; // 是否平局
	while (playerWinCount <= 2 && computerWinCount <= 2)
	{
		printf("玩家胜利%d局，电脑胜利%d局\n", playerWinCount, computerWinCount);
		if (flag == 0)
		{
			printf("第%d局\n", gameCount);
		}
		int playerRet = PlayerMove();
		int computerRet = ComputerMove();
		int win = IsWin(playerRet, computerRet);
		if (win == TIE)
		{
			printf("平局\n");
			flag = 1;
		}
		else if (win == PLAYER_WIN)
		{
			printf("玩家赢\n");
			playerWinCount++;
			gameCount++;
			flag = 0;
		}
		else
		{
			printf("电脑赢\n");
			computerWinCount++;
			gameCount++;
			flag = 0;
		}
	}

	if (playerWinCount == 3)
	{
		printf("玩家获得最终胜利\n");
	}
	else
	{
		printf("电脑获得最终胜利\n");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
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