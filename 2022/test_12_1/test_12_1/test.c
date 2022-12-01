#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

// 输入数据并保存

int main()
{
	char* pch = (char*)calloc(10, sizeof(char));
	if (pch == NULL)
	{
		printf("calloc: %s\n", strerror(errno));
		return 1;
	}

	char* p = pch;
	int size = 0;
	int capacity = 10;

	while ((*(p++) = getchar()) != '\n')
	{
		size++;
		if (size == capacity)
		{
			char* tmp = (char*)realloc(pch, 2 * capacity);
			if (tmp == NULL)
			{
				printf("realloc: %s\n", strerror(errno));
				free(pch);
				pch = NULL;
				return 1;
			}
			capacity *= 2;
		}
	}
	*(--p) = '\0';

	printf("您输入的是: %s\n", pch);

	FILE* pf = fopen("data.txt", "wb");
	if (pf == NULL)
	{
		printf("fopen: %s", strerror(errno));
		free(pch);
		pch = NULL;
		return 1;
	}

	p = pch;
	while (size--)
	{
		fwrite(p++, sizeof(char), 1, pf);
	}

	fclose(pf);
	pf = NULL;
	printf("已保存\n");

	printf("读取文件\n");
	pf = fopen("data.txt", "rb");
	if (pf == NULL)
	{
		printf("fopen: %s", strerror(errno));
		free(pch);
		pch = NULL;
		return 1;
	}

	char ch = 0;
	while (fread(&ch, sizeof(char), 1, pf))
	{
		putchar(ch);
	}
	putchar('\n');

	fclose(pf);
	pf = NULL;

	free(pch);
	pch = NULL;

	return 0;
}