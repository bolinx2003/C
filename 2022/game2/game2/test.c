#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("****************************\n");
	printf("********  1. play    *******\n");
	printf("********  0. exit    *******\n");
	printf("****************************\n");
}

void game()
{
	// 扫雷游戏的具体实现
	// 存储布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };
	// 存放排查出来的雷的信息
	char show[ROWS][COLS] = { 0 };

	// 初始化棋盘
	init_board(mine, ROWS, COLS, '0');
	init_board(show, ROWS, COLS, '*');
	// 打印棋盘
	//show_board(mine, ROW, COL);
	// 布置雷
	set_mine(mine, ROW, COL);
	show_board(show, ROW, COL);
	// 排查雷
	find_mine(mine, show, ROW, COL);
}

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
			printf("选择错误，重新选择!\n");
			break;
		}
	} while (input);

	return 0;
}

