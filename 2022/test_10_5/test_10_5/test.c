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
//	// ����k
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
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
//		printf("����������:>");
//		scanf("%s", passwd);
//		if (strcmp(passwd, "123456") == 0)
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("���������������\n");
//		}
//	}
//
//	if (3 == i)
//	{
//		printf("�����������������˳�����\n");
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
//		printf("������:>");
//		scanf("%d", &guess);
//
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
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
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
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
//		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}