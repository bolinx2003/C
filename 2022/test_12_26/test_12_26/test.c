#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 假设一个数组从左到右变大，从上到下变大
// 查找k

void find_k(int(*arr)[3], int* px, int* py, int k)
{
	// 右上角
	int x = 0;
	int y = *py - 1;

	while (x < *px && y >= 0)
	{
		if (arr[x][y] > k)
		{
			--y;
		}
		else if (arr[x][y] < k)
		{
			++x;
		}
		else
		{
			*px = x;
			*py = y;
			return;
		}
	}

	*px = -1;
	*py = -1;
}

int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int x = sizeof(arr) / sizeof(arr[0]);
	int y = sizeof(arr[0]) / sizeof(arr[0][0]);
	int k = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("请输入要查找的数:>");
	scanf("%d", &k);
	find_k(arr, &x, &y, k);

	if (x == -1 && y == -1)
	{
		printf("找不到%d\n", k);
	}
	else
	{
		printf("找到了，坐标是: %d, %d\n", x, y);
	}

	return 0;
}