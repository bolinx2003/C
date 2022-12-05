#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	char passwd[20] = { 0 };
	char confirm[20] = { 0 };
	bool flag = false; // 是否是第二次以后设置密码

	do
	{
		if (flag)
		{
			printf("确认失败，请重新设置密码\n");
		}
		flag = true;
		printf("请设置密码:>");
		gets(passwd);
		printf("请确认密码:>");
		gets(confirm);
	} while (strcmp(passwd, confirm));

	char input[20] = { 0 };
	while (true)
	{
		printf("登录中，请输入密码:>");
		gets(input);
		if (strcmp(input, passwd) == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入\n");
		}
	}

	return 0;
}