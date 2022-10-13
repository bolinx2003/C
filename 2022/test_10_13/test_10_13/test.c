#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (; i < sz; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (; i < sz; ++i)
//	{
//		arr[i] = 0;
//	}
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		++left;
//		--right;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	//print(arr, sz);
//	//init(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	printf("交换前:\n");
//	printf("arr1: ");
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\narr2: ");
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//
//	// 交换arr1和arr2
//	for (i = 0; i < sz; ++i)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	printf("交换后:\n");
//	printf("arr1: ");
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\narr2: ");
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 3 / 2;
//	float b = 3.0 / 2;
//	printf("a = %d, b = %f\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 9 % 2;
//	printf("a = %d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = -5;
//	//int b = a << 1;
//	int b = a >> 1;
//
//	printf("a = %d, b = %d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = -5;
//	//int c = a & b;
//	//int c = a | b;
//	int c = a ^ b;
//
//	printf("c = %d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	printf("交换前：a = %d, b = %d\n", a, b);
//	// 交换两个数
//	// 法一：
//	// a = 3, b = 5
//	int tmp = a;
//	// a = 3, b = 5, tmp = 3
//	a = b;
//	// a = 5, b = 5, tmp = 3
//	b = tmp;
//	// a = 5, b = 3, tmp = 3
//	printf("交换后：a = %d, b = %d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	printf("交换前：a = %d, b = %d\n", a, b);
//	// 交换两个数
//	// 法二：
//	// a = 3, b = 5
//	a = a + b;
//	// a = 3+5, b = 5
//	b = a - b;
//	// a = 3+5, b = 3+5-5 = 3
//	a = a - b;
//	// a = 3+5-3 = 5, b = 3
//	printf("交换后：a = %d, b = %d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	printf("交换前：a = %d, b = %d\n", a, b);
//	// 交换两个数
//	// 法三：
//	// a = 3, b = 5
//	a = a ^ b;
//	// a = 3^5, b = 5
//	b = a ^ b;
//	// a = 3^5, b = (3^5)^5 = 3
//	a = a ^ b;
//	// a = (3^5)^3 = 5, b = 3
//	printf("交换后：a = %d, b = %d\n", a, b);
//
//	return 0;
//}

