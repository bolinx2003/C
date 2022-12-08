#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 1 - 小端
// 0 - 大端
int check_sys1()
{
	int i = 1;
	return *((char*)&i);
}

int check_sys2()
{
	union
	{
		int i;
		char c;
	}u;
	u.i = 1;
	return u.c;
}

int main()
{
	int ret = check_sys1();
	if (ret)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}

	ret = check_sys2();
	if (ret)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}

	return 0;
}