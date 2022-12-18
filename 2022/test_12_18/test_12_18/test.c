#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned int)time(NULL));
	int rand_num = rand();
	printf("rand_num = %d\n", rand_num);

	// 二分查找
	int max = RAND_MAX;
	int min = 0;
	int count = 0;
	while (1)
	{
		int mid = (max + min) / 2;
		++count;
		printf("第%d次查找: mid = %d , ", count, mid);
		if (mid > rand_num)
		{
			printf("大了\n");
			max = mid - 1;
		}
		else if (mid < rand_num)
		{
			printf("小了\n");
			min = mid + 1;
		}
		else
		{
			printf("找到了\n");
			break;
		}
	}

	return 0;
}