#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <stddef.h>

//enum Status
//{
//	VALID,
//	INVALID
//}status;
//
//// 模拟实现atoi
//int my_atoi(const char* str)
//{
//	// 空指针
//	assert(str);
//
//	// 默认是非法的
//	status = INVALID;
//
//	// 空字符串
//	if (*str == '\0')
//	{
//		return 0;
//	}
//
//	// 空白字符
//	while (isspace(*str))
//	{
//		str++;
//	}
//
//	// 正负号
//	int flag = 1;
//	if (*str == '+')
//	{
//		str++;
//	}
//	else if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//
//	long long n = 0;
//	while (*str)
//	{
//		// 判断数字字符
//		if (isdigit(*str))
//		{
//			// 至少进去一次才是合法的
//			status = VALID;
//			n = n * 10 + flag * (*str - '0');
//			// 判断越界
//			if (n < INT_MIN)
//			{
//				status = INVALID;
//				return INT_MIN;
//			}
//			if (n > INT_MAX)
//			{
//				status = INVALID;
//				return INT_MAX;
//			}
//		}
//		else // 非数字字符
//		{
//			status = INVALID;
//			return (int)n;
//		}
//
//		str++;
//	}
//
//	return (int)n;
//}
//
//int main()
//{
//	char arr[] = "+";
//	int ret = my_atoi(arr);
//
//	if (status == VALID)
//		printf("正常转化：%d\n", ret);
//	else
//		printf("非法转化：%d\n", ret);
//
//	return 0;
//}

// 把空格替换成%20
//#include <string.h>
//
//void ReplaceSpace(char* str, int len)
//{
//	assert(str);
//
//	// 统计空格的个数
//	char* cur = str;
//	int count = 0;
//	while (len--)
//	{
//		if (isspace(*cur))
//		{
//			count++;
//		}
//		cur++;
//	}
//
//	char* end1 = cur - 1;
//	char* end2 = end1 + count * 2;
//
//	while (end1 < end2)
//	{
//		if (!isspace(*end1))
//		{
//			*end2-- = *end1--;
//		}
//		else
//		{
//			end1--;
//			*end2-- = '0';
//			*end2-- = '2';
//			*end2-- = '%';
//		}
//	}
//}
//
//int main()
//{
//	char arr[50] = "We are happy!";
//	ReplaceSpace(arr, strlen(arr));
//	printf("%s\n", arr);
//
//	return 0;
//}

// 写一个宏，交换一个数二进制位的奇数位和偶数位
//#define SWAP(num) (num = (((num&0x55555555)<<1)+((num&0xaaaaaaaa)>>1)))
//// 0101...0101 去掉偶数位，保留奇数位
//// 1010...1010 去掉奇数位，保留偶数位
//
//int main()
//{
//	int num = 10; // 1010
//	SWAP(num);    // 0101 -> 5
//	printf("%d\n", num);
//
//	return 0;
//}

// 模拟实现offsetof
//#define OFFSETOF(st_type, mem_name) ((size_t)&(((st_type*)0)->mem_name))
//
//struct S
//{
//	int i;
//	char c;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, c));
//	printf("%d\n", OFFSETOF(struct S, d));
//
//	return 0;
//}