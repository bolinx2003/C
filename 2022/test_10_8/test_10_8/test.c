#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = "XXXXXXXXXXXXX";
//
//	strcpy(arr2, arr1);
//
//	printf("arr1:%s\n", arr1);
//	printf("arr2:%s\n", arr2);
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "Hello world!";
//	memset(arr, 'X', 5);
//
//	printf("%s\n", arr);
//
//	return 0;
//}

// 求两个整数的较大值
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	scanf("%d %d", &a, &b);
//
//	int m = get_max(a, b);
//
//	printf("%d\n", m);
//
//	return 0;
//}

// 交换两个整形变量的内容
//void swap(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	printf("交换前：a = %d, b = %d\n", a, b);
//
//	swap(&a, &b);
//
//	printf("交换后：a = %d, b = %d\n", a, b);
//
//	return 0;
//}

#include <math.h>

// 打印100~200之间的素数
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

// 打印1000~2000之间的闰年
//int is_leap_year(int y)
//{
//	return ((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0);
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//
//	return 0;
//}

// 函数实现二分查找
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//
//	return -1; // 找不到了
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	// 查找k
//	int ret = binary_search(arr, k, sz);
//	if (-1 == ret)
//	{
//		printf("找不到了\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}