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
		printf("��ҳ�ȭ:>");
		scanf("%s", input);
		if (strcmp(input, "ʯͷ") == 0 || strcmp(input, "shitou") == 0 || strcmp(input, "rock") == 0 || strcmp(input, "stone") == 0)
		{
			return ROCK;
		}
		else if (strcmp(input, "����") == 0 || strcmp(input, "jiandao") == 0 || strcmp(input, "scissors") == 0 || strcmp(input, "shears") == 0 || strcmp(input, "clippers") == 0)
		{
			return SCISSORS;
		}
		else if (strcmp(input, "��") == 0 || strcmp(input, "bu") == 0 || strcmp(input, "paper") == 0 || strcmp(input, "cloth") == 0 || strcmp(input, "textile") == 0)
		{
			return PAPER;
		}
		else
		{
			printf("���������������\n");
		}
	}
}

int ComputerMove()
{
	printf("���Գ�ȭ:>");
	int ret = rand() % 3;
	if (ret == ROCK)
	{
		printf("ʯͷ\n");
	}
	else if (ret == SCISSORS)
	{
		printf("����\n");
	}
	else
	{
		printf("��\n");
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
	printf("�����ʤ\n");
	int i = 0;
	int playerWinCount = 0;
	int computerWinCount = 0;
	int gameCount = 1;
	int flag = 0; // �Ƿ�ƽ��
	while (playerWinCount <= 2 && computerWinCount <= 2)
	{
		printf("���ʤ��%d�֣�����ʤ��%d��\n", playerWinCount, computerWinCount);
		if (flag == 0)
		{
			printf("��%d��\n", gameCount);
		}
		int playerRet = PlayerMove();
		int computerRet = ComputerMove();
		int win = IsWin(playerRet, computerRet);
		if (win == TIE)
		{
			printf("ƽ��\n");
			flag = 1;
		}
		else if (win == PLAYER_WIN)
		{
			printf("���Ӯ\n");
			playerWinCount++;
			gameCount++;
			flag = 0;
		}
		else
		{
			printf("����Ӯ\n");
			computerWinCount++;
			gameCount++;
			flag = 0;
		}
	}

	if (playerWinCount == 3)
	{
		printf("��һ������ʤ��\n");
	}
	else
	{
		printf("���Ի������ʤ��\n");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();

	return 0;
}