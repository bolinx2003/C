#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main()
{
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("main::calloc: %s\n", strerror(errno));
		return 1;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");

	for (int i = 0; i < 10; i++)
	{
		p[i] = i;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", p[i]);
	}
	printf("\n");

	free(p);
	p = NULL;

	return 0l;
}