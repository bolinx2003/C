#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//void bubble_sort(int arr[], int sz)
//{
//	// 升序
//	int i = 0;
//	for (i = 0; i < sz - 1; ++i)
//	{
//		int flag = 1; // 假设已经有序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; ++j)
//		{
//			flag = 0;
//			// 交换
//			swap(&arr[j], &arr[j + 1]);
//		}
//
//		if (1 == flag)
//		{
//			return;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);
//
//	int i = 0;
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(long double*));
//
//	//结构体指针
//	printf("%d\n", sizeof(struct Stu*));
//
//	//数组指针
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(&arr));
//
//	//函数指针
//	printf("%d\n", sizeof(&test));
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//
//	char* pa = &a;
//	*pa = 0;
//
//	return 0;
//}

