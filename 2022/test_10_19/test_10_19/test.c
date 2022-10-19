#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = "XXXXXXXXXXXXXXX";
//
//	//my_strcpy(arr2, arr1);
//	//printf("%s\n", arr2);
//
//	printf("%s\n", my_strcpy(arr2, arr1));
//
//	return 0;
//}

//int main()
//{
//	//const int a = 10;
//	//a = 20;
//	//printf("a = %d\n", a);
//	//int* pa = &a;
//	//*pa = 200;
//	//printf("a = %d\n", a);
//
//	int a = 10;
//	//int* const pa = &a;
//	//const int* pa = &a;
//	const int* const pa = &a;
//	//int b = 100;
//	//pa = &b;
//	*pa = 20;
//	printf("a = %d\n", a);
//
//	return 0;
//}

//int my_strlen(const char* str)
//{
//	assert(str);
//
//	int count = 0;
//	while (*str)
//	{
//		++str;
//		++count;
//	}
//
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//
//	return 0;
//}

//int main()
//{
//	{
//		int a = 10;
//		printf("a = %d\n", a);
//	}
//	//printf("a = %d\n", a); // err
//
//	return 0;
//}

//extern int a;
//
//void test()
//{
//	printf("test::a = %d\n", a);
//}
//
//int main()
//{
//	printf("main::a = %d\n", a);
//	test();
//
//	return 0;
//}

//#define N 100

//enum Color
//{
//	RED, // 0
//	GREEN, // 1
//	BLUE // 2
//};
//
//int main()
//{
//	//1;
//	//3.14;
//	//'w';
//	//int a = 10;
//
//	//int a = 10;
//	//printf("a = %d\n", a);
//	//a = 20;
//	//printf("a = %d\n", a);
//
//	//int arr[10] = {0};
//	//const int a = 10;
//	//int arr[a] = { 0 };
//
//	//int a = N;
//	//int arr[N] = { 0 };
//
//	//printf("%d %d %d\n", RED, GREEN, BLUE);
//	//enum Color c = RED;
//
//	return 0;
//}

