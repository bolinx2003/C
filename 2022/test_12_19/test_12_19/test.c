#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

// 按照顺序打印一个无符号整数的每一位

//void print(unsigned int n)
//{
//	if (n >= 10)
//		print(n / 10);
//	printf("%u ", n % 10);
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	print(n);
//
//	return 0;
//}

// 使用字符串
int main()
{
	char arr[100] = { 0 };
	scanf("%s", arr);
	int len = (int)strlen(arr);
	for (size_t i = 0; i < len; i++)
	{
		printf("%c ", arr[i]);
	}

	return 0;
}