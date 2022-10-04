#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//
//	printf("请输入密码:>");
//	scanf("%s", password);
//
//	// 清理缓冲区
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("请确认密码(Y/N):>");
//	int ch = getchar();
//	if ('Y' == ch)
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//
//	//while (scanf("%d", &ch) != EOF)
//	//{
//	//	printf("%d\n", ch);
//	//}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			continue;
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	//for (;;)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	int count = 0;
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			++count;
//		}
//	}
//	printf("count = %d\n", count);
//
//	return 0;
//}