#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
	for (int i = 101; i <= 200; i += 2)
	{
		bool flag = true;
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
			{
				flag = false;
			}
		}
		if (flag)
		{
			printf("%d ", i);
		}
	}

	return 0;
}