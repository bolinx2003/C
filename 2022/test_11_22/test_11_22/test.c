#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void move(char pos1, char pos2)
{
	printf("%c->%c ", pos1, pos2);
}

void Hanoi(int n, char pos1, char pos2, char pos3)
{
	if (1 == n)
	{
		move(pos1, pos3);
	}
	else
	{
		Hanoi(n - 1, pos1, pos3, pos2);
		move(pos1, pos3);
		Hanoi(n - 1, pos2, pos1, pos3);
	}
}

int main()
{
	printf("1:");
	Hanoi(1, 'A', 'B', 'C');
	printf("\n");

	printf("2:");
	Hanoi(2, 'A', 'B', 'C');
	printf("\n");

	printf("3:");
	Hanoi(3, 'A', 'B', 'C');
	printf("\n");

	printf("4:");
	Hanoi(4, 'A', 'B', 'C');
	printf("\n");

	return 0;
}