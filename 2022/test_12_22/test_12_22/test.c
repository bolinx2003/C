#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ptr = (int*)calloc(10, sizeof(int));
	if (ptr == NULL)
	{
		perror("calloc");
		return 1;
	}

	for (int i = 0; i < 10; i++)
	{
		*(ptr + i) = i + 1;
	}

	for (int i = 0; i < 40; i++)
	{
		printf("%-2d ", *(((char*)ptr) + i));
		if ((i + 1) % 4 == 0)
			printf("\n");
	}

	free(ptr);
	ptr = NULL;

	return 0;
}