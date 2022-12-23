#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	char passwd[256] = { 0 };
	printf("请设置密码:>");
	scanf("%[^\n]", passwd);

	// 保存密码到文件
	FILE* pf = fopen("passwd.dat", "wb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	for (size_t i = 0; i < strlen(passwd); i++)
	{
		fwrite(passwd + i, sizeof(char), 1, pf);
	}

	fclose(pf);
	pf = NULL;

	// 加载密码
	memset(passwd, 0, strlen(passwd));

	pf = fopen("passwd.dat", "rb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	int i = 0;
	while (fread(passwd + i, sizeof(char), 1, pf))
	{
		++i;
	}

	fclose(pf);
	pf = NULL;

	char input[256] = { 0 };
	while (1)
	{
		// 清理缓冲区
		int tmp = 0;
		while ((tmp = getchar()) != '\n')
		{
			;
		}

		printf("请输入密码:>");
		scanf("%[^\n]", input);
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