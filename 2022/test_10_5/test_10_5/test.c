#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int i = 1;
//
//	do
//	{
//		if (5 == i)
//			continue;
//
//		printf("%d ", i);
//		++i;
//	} while (i <= 10);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		int i = 0;
//		int ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//
//	printf("sun = %d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//
//	printf("sun = %d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//	// 查找k
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//
//	return 0;
//}

#include <string.h>
#include <Windows.h>
#include <stdlib.h>

//int main()
//{
//	char arr1[] = "Hello, World!!!!!";
//	char arr2[] = "#################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		++left;
//		--right;
//	}
//
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main()
//{
//	char passwd[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", passwd);
//		if (strcmp(passwd, "123456") == 0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，重新输入\n");
//		}
//	}
//
//	if (3 == i)
//	{
//		printf("三次密码均输入错误，退出程序\n");
//	}
//
//	return 0;
//}

#include <time.h>

//void menu()
//{
//	printf("************************\n");
//	printf("***** 1. play      *****\n");
//	printf("***** 0. exit      *****\n");
//	printf("************************\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//
//	while (1)
//	{
//		printf("猜数字:>");
//		scanf("%d", &guess);
//
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择！\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//
//	system("shutdown -s -t 60");
//
//	while (1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}