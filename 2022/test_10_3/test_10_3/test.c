#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}

//#define MAX 1000
//
//#define STR "Hello,World!"
//
//int main()
//{
//	//int m = MAX;
//	//printf("%d\n", m);
//	printf("%s\n", STR);
//
//	return 0;
//}

//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//#define MAX(x, y) ((x)>(y)?(x):(y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//int m = get_max(a, b);
//	int m = MAX(a, b);
//	printf("较大值：%d\n", m);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 100;
//	printf("%d\n", a);
//
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	char ch = 'w';
//
//	int* pa = &a;
//	char* pc = &ch;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[20];
//}Stu;
//
//void Print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->id);
//}
//
//int main()
//{
//	struct Stu s1 = { "小明", 18, "男", "2021060701" };
//	Stu s2 = { "小红", 19, "女", "2021060702" };
//
//	scanf("%s %d %s %s", s1.name, &(s1.age), s1.sex, s1.id);
//	printf("%s %d %s %s\n", s1.name, s1.age, s1.sex, s1.id);
//	Print(&s2);
//
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	//if (age >= 18)
//	//{
//	//	printf("成年\n");
//	//}
//
//	//if (age >= 18)
//	//{
//	//	printf("成年\n");
//	//}
//	//else
//	//{
//	//	printf("未成年\n");
//	//}
//
//	if (age < 18)
//	{
//		printf("青少年\n");
//		printf("好好学习\n");
//	}
//	else if (age >= 18 && age < 30)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 30 && age < 50)
//	{
//		printf("中年\n");
//	}
//	else if (age >= 50 && age < 80)
//	{
//		printf("中老年\n");
//	}
//	else if (age >= 80 && age < 100)
//	{
//		printf("老年\n");
//	}
//	else
//	{
//		printf("老寿星\n");
//	}
//
//	return 0;
//}

//int test()
//{
//	int a = 0;
//
//	if (a)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int ret = test();
//	printf("ret = %d\n", test);
//
//	return 0;
//}

//int main()
//{
//	int num = 1;
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	if (n % 2 == 1)
//	{
//		printf("奇数\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//
//	return 0;
//}

