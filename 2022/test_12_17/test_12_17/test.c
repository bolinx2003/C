#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdbool.h>

void swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void bubble_sort(int* arr, int sz)
{
	for (size_t i = 0; i < sz - 1; i++)
	{
		bool flag = true;
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = false;
				swap(arr + j, arr + j + 1);
			}
		}
		if (flag)
			return;
	}
}

int main()
{
	int arr[100] = { 0 };
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		arr[i] = 100 - i;
	}
	bubble_sort(arr, sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}