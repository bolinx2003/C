#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int capacity = 3;
	int* arr = (int*)malloc(capacity * sizeof(int));
	if (arr == NULL)
	{
		perror("malloc");
		return 1;
	}

	int size = 0;
	while (scanf("%d", arr + size) != EOF)
	{
		size++;
		if (size == capacity)
		{
			capacity += 2;
			int* tmp = realloc(arr, capacity * sizeof(int));
			if (tmp == NULL)
			{
				perror("realloc");
				free(arr);
				arr = NULL;
				return 1;
			}
			arr = tmp;
		}
	}

	for (int i = 0; i < size; i++)
	{
		printf("%d ", *(arr + i));
	}

	free(arr);
	arr = NULL;

	return 0;
}