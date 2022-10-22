#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//int main()
//{
//	int n = 1;
//	int* p = &n;
//	++*p;
//	printf("%d\n", n);
//
//	return 0;
//}

// 求最小公倍数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	// 求最大公约数，使用辗转相除
//	int a1 = a;
//	int b1 = b;
//	int c1 = 0;
//	// a1 b1 c1
//	while (c1 = a1 % b1)
//	{
//		a1 = b1;
//		b1 = c1;
//	}
//
//	// b1是最大公约数
//	// 最小公倍数
//	printf("%d\n", a * b / b1);
//
//	return 0;
//}

// 逆序字符串
// I like Beijing.
// .gnijieb ekil I
// Beijing. like I

//void reverse(char* l, char* r)
//{
//	assert(l && r);
//
//	while (l < r)
//	{
//		char tmp = *l;
//		*l = *r;
//		*r = tmp;
//		l++;
//		r--;
//	}
//}
//
//int main()
//{
//	char arr[101] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//
//	// 整体逆序
//	reverse(arr, arr + len - 1);
//
//	// 每个单词逆序
//	char* cur = arr;
//	char* start = arr;
//
//	// abc def ghi\0
//	// ihg fed cba
//	while (1)
//	{
//		while (1)
//		{
//			if (*cur == ' ' || *cur == '\0')
//			{
//				break;
//			}
//			cur++;
//		}
//		reverse(start, cur - 1);
//
//		// 已经逆序完最后一个单词
//		if (*cur == '\0')
//		{
//			break;
//		}
//
//		cur++;
//		start = cur;
//	}
//
//	printf("%s\n", arr);
//
//	return 0;
//}