#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	char passwd[20] = { 0 };
	for (size_t i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", passwd);
		if (strcmp(passwd, "passwd") == 0)
		{
			printf("登陆成功\n");
			break;
		}
		else if (i == 2)
		{
			printf("三次密码均输入错误，登录失败\n");
			break;
		}
		else
		{
			printf("密码错误，重新输入\n");
		}
	}

	return 0;
}