#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

void swap(int* pa, int* pb)
{
	assert(pa && pb);

	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

void bubble_sort(int arr[], int sz)
{
	for (int i = 0; i < sz - 1; i++)
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
		{
			return;
		}
	}
}

void print_arr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	bubble_sort(arr, sizeof(arr) / sizeof(arr[0]));
	print_arr(arr, sizeof(arr) / sizeof(arr[0]));

	return 0;
}