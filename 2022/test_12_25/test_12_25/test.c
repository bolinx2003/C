#define _CRT_SECURE_NO_WARNINGS 1

#include <stdbool.h>
#include <stdio.h>

// true - 小端
// false - 大端

//bool check_sys()
//{
//	int a = 1;
//	return (bool)*(char*)&a;
//}

bool check_sys()
{
	union
	{
		int i;
		char c;
	}u;
	u.i = 1;
	return (bool)u.c;
}

int main()
{
	if (check_sys())
		printf("小端\n");
	else
		printf("大端\n");

	return 0;
}