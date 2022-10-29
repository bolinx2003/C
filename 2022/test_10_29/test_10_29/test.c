#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	// 函数地址
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	// 函数指针
//	int (*pf)(int, int) = Add;
//	int ret = (*Add)(2, 3);
//	printf("%d\n", ret);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}

//int main()
//{
//	int (*pf[])(int, int) = { Add, Sub, Mul, Div };
//	int sz = sizeof(pf) / sizeof(pf[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int ret = pf[i](8, 2);
//		printf("%d\n", ret);
//	}
//
//	return 0;
//}

// 写一个计算器 - 代码冗余
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("******************************\n");
//	printf("***** 1. add   2. sub    *****\n");
//	printf("***** 3. mul   4. div    *****\n");
//	printf("***** 0. exit            *****\n");
//	printf("******************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

// 使用函数指针数组实现计算器
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("******************************\n");
//	printf("***** 1. add   2. sub    *****\n");
//	printf("***** 3. mul   4. div    *****\n");
//	printf("***** 0. exit            *****\n");
//	printf("******************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	// 转移表
//	int (*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div };
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误，重新选择\n");
//		}
//	} while (input);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int (*pfArr[])(int, int) = { Add, Sub, Mul, Div };
//	int (*(*p)[4])(int, int) = &pfArr; // p是指向函数指针数组的指针
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = (*p)[i](8, 2);
//		printf("ret = %d\n", ret);
//	}
//
//	return 0;
//}

// 回调函数
//void test()
//{
//	printf("hehe\n");
//}
//
//void print_hehe(void (*p)())
//{
//	if (1)
//	{
//		p();
//	}
//}
//
//int main()
//{
//	print_hehe(test);
//
//	return 0;
//}

// 使用回调函数实现计算器
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("******************************\n");
//	printf("***** 1. add   2. sub    *****\n");
//	printf("***** 3. mul   4. div    *****\n");
//	printf("***** 0. exit            *****\n");
//	printf("******************************\n");
//}
//
//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	printf("请输入2个操作数:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("ret = %d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1; // 假设已经有序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;
//				// 交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag == 1)
//		{
//			// 已经有序了
//			break;
//		}
//	}
//}
//
//typedef struct Stu
//{
//	char name[20]; // 名字
//	int age; // 年龄
//	double score; // 成绩
//}Stu;
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *(buf1 + i);
//		*(buf1 + i) = *(buf2 + i);
//		*(buf2 + i) = tmp;
//	}
//}
//
//void bubble_sort(void* base, int num, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		int flag = 1; // 假设已经有序
//		int j = 0;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				flag = 0;
//				// 交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//		if (flag == 1) // 已经有序了
//		{
//			break;
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((Stu*)e1)->age - ((Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((Stu*)e1)->name, ((Stu*)e2)->name);
//}
//
//void print_stu_info(Stu arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("arr[%d] name:%s age:%d score:%lf\n", i, arr[i].name, arr[i].age, arr[i].score);
//	}
//}
//
//void test1()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//}
//
//void test2()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
//void test3()
//{
//	Stu arr[] = { {"zhangsan", 20, 30.5}, {"lisi", 30, 90.0}, {"wangwu", 25, 70.5} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	printf("按照年龄排序\n");
//	print_stu_info(arr, sz);
//
//	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//	printf("按照名字排序\n");
//	print_stu_info(arr, sz);
//}
//
//int main()
//{
//	test3();
//
//	return 0;
//}