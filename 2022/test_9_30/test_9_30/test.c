#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 主函数在一个工程中有且仅有一个
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	printf("haha");
//	return 0;
//}

// 类型大小
//int main()
//{
//	//printf("%d\n", 100);
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}

// 类型是用来创建变量的
//int main()
//{
//	int price = 55;
//	float weight = 55.5f;
//
//	return 0;
//}

// 变量的创建
//int main()
//{
//	int age = 10;
//	int ch = 'w';
//
//	return 0;
//}

////int b = 1000; // 全局变量
//int a = 1000;
//
//int main()
//{
//	int a = 100; // 局部变量
//	// 局部优先
//	printf("a = %d\n", a);
//
//	return 0;
//}

// 求两数和
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//
//    // 输入
//    scanf("%d %d", &num1, &num2);
//
//    // 求和
//    sum = num1 + num2;
//
//    // 输出
//    printf("sum = %d\n", sum);
//
//    return 0;
//}

// scanf不安全的原因
//int main()
//{
//	char arr[5] = { 0 };
//	scanf("%s", arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

// 局部变量作用域
//int main()
//{
//	{
//		int a = 100;
//		printf("%d\n", a);
//	}
//
//	//printf("%d\n", a);
//
//	return 0;
//}

// 全局变量作用域
//extern int a;
//
//void test()
//{
//	printf("test::%d\n", a);
//}
//
//int main()
//{
//	test();
//	printf("main::%d\n", a);
//
//	return 0;
//}

// 局部变量的生命周期
//int main()
//{
//	{
//		int a = 100;
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);
//
//	return 0;
//}