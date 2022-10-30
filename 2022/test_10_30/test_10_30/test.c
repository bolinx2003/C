#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

// 实现计算器
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
//	printf("********************************\n");
//	printf("****** 1. add   2. sub   *******\n");
//	printf("****** 3. mul   4. div   *******\n");
//	printf("****** 0. exit           *******\n");
//	printf("********************************\n");
//}

// 使用回调函数
//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//
//	printf("请输入2个操作数:>");
//	scanf("%d %d", &x, &y);
//	printf("结果是：%d\n", pf(x, y));
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

// 使用函数指针数组
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
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
//			printf("结果是：%d\n", pfArr[input](x, y));
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else
//		{
//			printf("选择错误，重新选择\n");
//		}
//	} while (input);
//
//	return 0;
//}

//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
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
//void Swap(char* p1, char* p2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *p1;
//		*p1 = *p2;
//		*p2 = tmp;
//		p1++;
//		p2++;
//	}
//}
//
//void bubble_sort(void* base, int num, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		int flag = 1; // 假设已经有序
//		// 一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			// j j+1
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				flag = 0;
//				// 交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//		if (1 == flag)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 11,10,9,8,7,6,5,4,3,2,1,0,-1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//
//	return 0;
//}