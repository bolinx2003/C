#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int input = 0;
//	printf("���ú�ѧϰ��?(1/0):>");
//	scanf("%d", &input);
//	if (1 == input)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("�õ��Կ����Զ�������������\n");
//	}
//
//	return 0;
//}

#include <stdlib.h>
#include <time.h>

//int main()
//{
//	srand((unsigned int)time(NULL));
//	int day = 0; // ѧϰ������
//	while (1)
//	{
//		printf("��%d��\n", day);
//		printf("һ������\n");
//		printf("���Ʊ\n");
//		// �����в�Ʊ�ĸ�����1/1000
//		if (0 == rand() % 1000)
//		{
//			printf("����500��\n");
//			break;
//		}
//		else
//		{
//			printf("û�н�\n");
//		}
//		printf("��ʵѧϰ\n");
//		day++;
//		if (365 * 2 == day)
//		{
//			printf("��Ϊ��ţ\n");
//			break;
//		}
//		else
//		{
//			printf("����һ������\n");
//		}
//	}
//	printf("ӭȢ�׸���\n");
//
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line < 20000)
//	{
//		printf("%d:�ô���\n", line);
//		line++;
//	}
//
//	if (line < 20000)
//	{
//		printf("�ú�ѧϰ\n");
//	}
//	else
//	{
//		printf("��offer\n");
//	}
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d %d", &num1, &num2);
//	
//	//sum = num1 + num2;
//	sum = Add(num1, num2);
//	
//	printf("sum = %d", sum);
//
//	return 0;
//}

//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	////int arr2[100] = { 0 };
//	////printf("%d\n", arr[8]);
//
//	//int i = 0;
//	//while (i < 10)
//	//{
//	//	printf("%d ", arr[i]);
//	//	i++;
//	//}
//
//	// �䳤����
//	//int n = 10;
//	//int arr[n];
//	//int i = 0;
//	//while (i < n)
//	//{
//	//	scanf("%d", arr[i]);
//	//	printf("%d ", arr[i]);
//	//	i++;
//	//}
//
//	return 0;
//}

//int main()
//{
//	//printf("%d\n", 7 / 3);
//	//printf("%f\n", 7.0 / 3);
//
//	printf("%d\n", 7 % 3);
//
//	return 0;
//}

//int main()
//{
//	int a = 0; // ��ʼ��
//	a = 20; // ��ֵ
//	//a = a + 10;
//	a += 10;
//	a -= 15;
//	printf("%d\n", a);
//
//	return 0;
//}

// дһ�����������������Ľϴ�ֵ
//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//
//	// ����
//	scanf("%d %d", &n1, &n2);
//	// ��ϴ�ֵ
//	int m = get_max(n1, n2);
//	// ���
//	printf("%d\n", m);
//
//	return 0;
//}

//int main()
//{
//	//int flag = 0;
//	//if (!flag)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	//int a = -10;
//	//int b = -a;
//	//printf("%d\n", b);
//
//	//int a = 10;
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//
//	int a = 10;
//	//int b = ++a;
//	//int b = a++;
//	//int b = --a;
//	int b = a--;
//
//	printf("a = %d, b = %d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//if (a >= 10)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	int a = 10;
//	if (10 == a)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = 4;
//	if (3 == a || 4 == b)
//	{
//		printf("hehe\n");
//	}
//
//	//if (3 == a && 4 == b)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 6;
//	int m = 0;
//
//	//if (a > b)
//	//{
//	//	m = a;
//	//}
//	//else
//	//{
//	//	m = b;
//	//}
//
//	m = a > b ? a : b;
//
//	printf("%d\n", m);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 20;
//	int c = 0;
//	int d = (a -= 3, b += a, c = a - b, b = a - 4);
//	printf("d = %d\n", d);
//
//	return 0;
//}

//int main()
//{
//	// auto��ʡ��
//	auto int a = 0;
//
//	return 0;
//}

//unsigned int num = 10;
//typedef unsigned int uint;
//uint num2 = 10;

//int main()
//{
//	int num1 = 10;
//	register int num2 = 20;
//
//	return 0;
//}

//void test()
//{
//	static int a = 5;
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