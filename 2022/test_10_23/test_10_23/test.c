#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//
// char -128~127
// 00000000 -> 0
// 00000001 -> 1
// 00000010 -> 2
// 00000011 -> 3
// ...
// 01111111 => 127
// 10000000 -> -128
// 10000001 -> 10000000 -> 11111111 -> -127
// ...
// 11111110 -> 11111101 -> 10000010 -> -2
// 11111111 -> 11111110 -> 10000001 -> -1
//
//int main()
//{
//	char arr[1000];
//	int i = 0;
//	for (i = 0; i < 1000; ++i)
//	{
//		arr[i] = -1 - i;
//	}
//	// -1 -2 -3 ... -128 127 126 ... 3 2 1 0
//
//	printf("%d\n", strlen(arr));
//
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//
//	return 0;
//}