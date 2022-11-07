#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>

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