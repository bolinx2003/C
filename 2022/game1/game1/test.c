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
	// ������С��Ϸ�ľ���ʵ��
	char ret = 0;
	// ������������
	char board[ROW][COL] = { 0 };
	// ��ʼ������Ϊȫ�ո�
	init_board(board, ROW, COL);
	// ��ӡ����
	display_board(board, ROW, COL);

	while (1)
	{
		// �������
		player_move(board, ROW, COL);
		display_board(board, ROW, COL);
		// �ж���Ӯ
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		// ��������
		computer_move(board, ROW, COL); // �������
		display_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

//
// ʲôʱ����Ϸ�ͽ�����
// ���Ӯ - '*'
// ����Ӯ - '#'
// ƽ��   - 'Q'
// ����   - 'C'
//
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��(1/0):>");
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
			printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}

