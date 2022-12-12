#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void init_board(char arr[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (; i < rows; ++i)
	{
		int j = 0;
		for (; j < cols; ++j)
		{
			arr[i][j] = set;
		}
	}
}

void show_board(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("------------ɨ��------------\n");
	for (i = 0; i <= col; ++i)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (i = 1; i <= row; ++i)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= col; ++j)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("------------ɨ��------------\n");
}

void set_mine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if ('0' == mine[x][y])
		{
			mine[x][y] = '1'; // ������
			--count;
		}
	}
}

static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y]
		+ mine[x - 1][y - 1]
		+ mine[x][y - 1] 
		+ mine[x + 1][y - 1] 
		+ mine[x + 1][y]
		+ mine[x + 1][y + 1]
		+ mine[x][y + 1]
		+ mine[x - 1][y + 1] - 8 * '0';
}

void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("������Ҫ�Ų������:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if ('*' == show[x][y])
			{
				if ('1' == mine[x][y])
				{
					printf("���ź����㱻ը����\n");
					show_board(mine, row, col);
					break;
				}
				else
				{
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0';
					show_board(show, row, col);
					++win;
				}
			}
			else
			{
				printf("�������ѱ��Ų�\n");
			}
		}
		else
		{
			printf("����Ƿ�����������\n");
		}
	}

	if (row * col - EASY_COUNT == win)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		show_board(mine, row, col);
	}
}

