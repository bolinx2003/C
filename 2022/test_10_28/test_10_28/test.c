#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <math.h>

// 求二进制中不同位的个数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int count = 0;
//	int tmp = a ^ b;
//	// 求tmp有几个1
//	while (tmp)
//	{
//		tmp &= tmp - 1; // 去掉一个1
//		count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; ++i)
//	{
//		if ((a & 1) != (b & 1))
//		{
//			++count;
//		}
//		a >>= 1;
//		b >>= 1;
//	}
//
//	printf("%d\n", count);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; ++i)
//	{
//		if (((a >> i) & 1) != ((b >> i) & 1))
//		{
//			++count;
//		}
//	}
//
//	printf("%d\n", count);
//
//	return 0;
//}

// 统计二进制位中1的个数
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; ++i)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			++count;
//		}
//	}
//
//	printf("%d\n", count);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int count = 0;
//	unsigned int m = (unsigned int)n;
//	while (m)
//	{
//		if (m % 2 == 1)
//		{
//			++count;
//		}
//		m /= 2;
//	}
//
//	printf("%d\n", count);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int count = 0;
//	while (n)
//	{
//		// 去掉最右边的1
//		n &= (n - 1);
//		++count;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}

// 打印二进制中的奇数位和偶数位
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//
//	// 奇数位
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//
//	// 偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//
//	return 0;
//}

// 使用指针打印数组
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}
//
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	printf("\n");
//}
//
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d ", *p++);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	print(arr, sizeof(arr) / sizeof(arr[0]));
//
//	return 0;
//}

//void reverse_string(char* str)
//{
//	assert(str);
//
//	char* left = str;
//	char* right = str + strlen(str) - 1;
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[10001] = { 0 };
//	//gets(arr);
//	fgets(arr, 10000, stdin); // 会把\n读进去
//	int len = strlen(arr);
//	arr[len - 1] = '\0'; // 去掉\n
//
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

// 打印自幂数
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; ++i)
//	{
//		// 判断是不是自幂数
//		// 求出位数 - n
//		int tmp = i;
//		int n = 0;
//		while (tmp)
//		{
//			tmp /= 10;
//			n++;
//		}
//
//		// 计算每一位的n次方之和，与自己比较
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

// 打印菱形
//int main()
//{
//	int n = 0; // 上半行的行数
//	scanf("%d", &n);
//
//	// 上半部分
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		// 打印空格
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		// 打印*
//		for (j = 0; j < i * 2 + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	// 下半部分
//	for (i = 0; i < n - 1; i++)
//	{
//		// 打印空格
//		int j = 0;
//		for (j = 0; j < 1 + i; j++)
//		{
//			printf(" ");
//		}
//		// 打印*
//		for (j = 0; j < 2 * (n - i) - 3; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 0; // 菱形上半部分的行数
//	scanf("%d", &n);
//
//	int row = 2 * n - 1; // 菱形的总行数
//	int col = row; // 菱形的总列数
//
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int row_count = 0; // 一行打印几个
//		// 分上下半部分
//		if (i < n) // 上
//		{
//			row_count = 2 * i + 1;
//		}
//		else // 下
//		{
//			row_count = col - 2 * (i + 1 - n);
//		}
//
//		// 空格个数
//		int space_count = (col - row_count) / 2;
//
//		int j = 0;
//		// 打印空格
//		for (j = 0; j < space_count; ++j)
//		{
//			printf(" ");
//		}
//		// 打印*
//		for (j = 0; j < row_count; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 1瓶汽水1块钱，2个空瓶换1瓶汽水
//int main()
//{
//	int money = 0; // 钱
//	scanf("%d", &money);
//
//	int total = money; // 买的喝了
//	int empty = total; // 空瓶
//
//	// 置换
//	while (empty >= 2)
//	{
//		total += (empty / 2);
//		empty -= (empty / 2);
//	}
//
//	// 若最后剩1个空瓶，可以借1个空瓶，换汽水喝后再还回去
//	if (1 == empty)
//	{
//		empty++; // 借1个空瓶
//		total += (empty / 2);
//		empty -= (empty / 2);
//		empty--; // 还回去
//	}
//
//	printf("%d\n", total);
//
//	return 0;
//}

// 让奇数位于偶数的前面
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		// 左边找一个偶数
//		while ((arr[left] % 2 == 1) && (left < right))
//		{
//			left++;
//		}
//
//		// 右边找一个奇数
//		while ((arr[right] % 2 == 0) && (left < right))
//		{
//			right--;
//		}
//
//		// 交换
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//

//void move(int* p, int sz)
//{
//	int* left = p;
//	int* right = p + sz - 1;
//
//	while (left < right)
//	{
//		// 左边找一个偶数
//		while (((*left) % 2 == 1) && (left < right))
//		{
//			left++;
//		}
//
//		// 右边找一个奇数
//		while (((*right) % 2 == 0) && (left < right))
//		{
//			right--;
//		}
//
//		// 交换
//		if (left < right)
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//	}
//}

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	printf("\n");
//}

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d ", *p++);
//	}
//	printf("\n");
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}

// 打印杨辉三角
//int main()
//{
//	int arr[10][10] = { 0 };
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			else if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//
//			printf("%-3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 计算2的n次方
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	// 方法1
//	int ret = 1;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret *= 2;
//	}
//	printf("%d\n", ret);
//
//	// 方法2
//	printf("%d\n", 1 << n);
//
//	return 0;
//}