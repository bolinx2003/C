#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 计算一个数在内存中存储的二进制中1的个数
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//
//	int i = 0;
//	for (i = 0; i < 32; ++i)
//	{
//		if (((num >> i) & 1) == 1)
//			++count;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}

//#include <stdbool.h>
//
//int main()
//{
//	bool flag1 = true;
//	if (flag1)
//	{
//		printf("true\n");
//	}
//
//	bool flag2 = false;
//	if (!flag2)
//	{
//		printf("false\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(int));
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	short s = 0;
//
//	printf("%d\n", sizeof(s = a + 2));
//	printf("%d\n", s);
//
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//
//	test1(arr);
//	test2(ch);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("a = %d, b = %d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 11;    // 1011
//	a |= (1 << 2); // 1111
//	printf("%d\n", a); // 15
//	a &= (~(1 << 2));
//	printf("%d\n", a); // 11
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = a++;
//	printf("a = %d, b = %d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1); // 逗号表达式
//
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { [3] = 5,[7] = 9 };
//
//	return 0;
//}

//int main()
//{
//	char c1 = 3;
//	char c2 = 127;
//
//	char c3 = c1 + c2;
//	printf("%d\n", c3);
//
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//
//	return 0;
//}

//int main()
//{
//	char c = 1;
//
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(-c));
//
//	return 0;
//}

