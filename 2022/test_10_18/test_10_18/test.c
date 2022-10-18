#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	float score;
//}s1,s2,s3;
//
//typedef struct Stu Stu;

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	float score;
//}Stu;
//
//int main()
//{
//	struct Stu s4;
//	struct Stu s5;
//	Stu s6;
//
//	return 0;
//}

//struct Point
//{
//	int x;
//	int y;
//}p1 = {10, 20};
//
//struct S
//{
//	char c;
//	struct Point sp;
//	double d;
//	char arr[20];
//};
//
//void print1(struct S s)
//{
//	printf("%c\n", s.c);
//	printf("%d %d\n", s.sp.x, s.sp.y);
//	printf("%lf\n", s.d);
//	printf("%s\n", s.arr);
//}
//
//void print2(struct S* ps)
//{
//	printf("%c\n", ps->c);
//	printf("%d %d\n", ps->sp.x, ps->sp.y);
//	printf("%lf\n", ps->d);
//	printf("%s\n", ps->arr);
//}
//
//int main()
//{
//	struct Point p2 = {100, 200};
//	struct S ss = { 'w', {20,30}, 3.14, "Hello"};
//
//	ss.c = 's';
//	ss.sp.x = 1000;
//	ss.sp.y = 2000;
//	ss.d = 5.5;
//	strcpy(ss.arr, "World");
//
//	//print1(ss);
//
//	print2(&ss);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	// X86环境下 VS2022
//	// 越界导致循环变量i被修改
//	// 会导致死循环
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}

