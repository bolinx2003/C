#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 10);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//	realloc(p, sizeof(int) * 20);
//	for (int i = 10; i < 20; i++)
//	{
//		*(p + i) = i;
//	}
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}