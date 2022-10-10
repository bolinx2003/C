#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("****************************\n");
	printf("********  1. play     ******\n");
	printf("********  0. exit     ******\n");
	printf("****************************\n");
}

void game()
{
	char ret = 0;
	// 存放下棋的数据
	char board[ROW][COL] = { 0 };
	// 初始化棋盘为全空格
	InitBoard(board, ROW, COL);
	// 打印棋盘
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		// 玩家下棋
		player_move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		// 判断输赢
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		// 电脑下棋
		computer_move(board, ROW, COL); // 随机下棋
		DisplayBoard(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
	//DisplayBoard(board, ROW, COL);
}

//
// 什么时候，游戏就结束了
// 玩家赢 - '*'
// 电脑赢 - '#'
// 平局   - 'Q'
// 继续   - 'C'
//
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择(1/0):>");
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
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}

