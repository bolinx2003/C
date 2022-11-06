#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//fputc('A', pf);
//	char ch = 0;
//	for (ch = 'A'; ch <= 'Z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//int ch = fgetc(pf);
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		putchar(ch);
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fputs("ABCDEFG\n", pf);
//	fputs("abcd\n", pf);
//	fputs("0123456789\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	char arr[300] = { 0 };
//	//fgets(arr, 300, pf);
//	while (NULL != fgets(arr, 300, pf))
//	{
//		printf("%s", arr);
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	struct Stu s = { 0 };
//	fscanf(pf, "%s %d %lf", s.name, &(s.age), &(s.score));
//	fprintf(stdout, "%s %d %lf\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	struct Stu s = { "张三", 19, 95.5 };
//	fprintf(pf, "%s %d %lf\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	char buf[256] = { 0 };
//	struct Stu s = { "李四", 20, 99.5 };
//	struct Stu tmp = { 0 };
//	sprintf(buf, "%s %d %lf", s.name, s.age, s.score);
//
//	fprintf(stdout, "%s\n", buf);
//
//	sscanf(buf, "%s %d %lf", tmp.name, &(tmp.age), &(tmp.score));
//	fprintf(stdout, "%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	FILE* pf = fopen("test2.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	struct Stu s = { 0 };
//	fread(&s, sizeof(struct Stu), 1, pf);
//	fprintf(stdout, "%s %d %lf\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	struct Stu s = { "张三", 18, 90.5 };
//
//	FILE* pf = fopen("test2.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fwrite(&s, sizeof(struct Stu), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	// 打开文件
//	FILE* pf = fopen("test3.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 写文件
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		fwrite(arr + i, sizeof(arr[0]), 1, pf);
//	}
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test3.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 读文件
//	int tmp = 0;
//	int* p = NULL;
//	int count = 0;
//	while (fread(&tmp, sizeof(int), 1, pf))
//	{
//		int* buf = realloc(p, (++count) * sizeof(int));
//		if (NULL == buf)
//		{
//			perror("realloc");
//			return 1;
//		}
//		else
//		{
//			p = buf;
//			p[count - 1] = tmp;
//		}
//	}
//
//	if (ferror(pf))
//	{
//		printf("遇到错误\n");
//		return 1;
//	}
//	else if (feof(pf))
//	{
//		printf("读取结束\n");
//	}
//
//	int i = 0;
//	for (i = 0; i < count; i++)
//	{
//		printf("%d ", p[i]);
//	}
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("log.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 生成日志
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf, "function name: %s, file name: %s, date: %s, time: %s, line: %d\n", __func__, __FILE__, __DATE__, __TIME__, __LINE__);
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//#define NUM 100
//
//// 宏
//#define MAX(x, y) ((x)>(y)?(x):(y))
//#define DOUBLE(x) ((x)+(x))
//#define SQUARE(x) ((x)*(x))
//
//int main()
//{
//	printf("%d\n", NUM);
//	printf("%d\n", DOUBLE(100));
//	printf("%d\n", SQUARE(100));
//
//	return 0;
//}

// 把宏的参数插入到字符串中
//#define PRINT(N) printf("The value of " #N " is %d.\n", N)
//
//int main()
//{
//	int a = 10;
//	PRINT(a);
//
//	int b = 20;
//	PRINT(b);
//
//	return 0;
//}

//#define PRINT(N, format) printf("The value of " #N " is " format ".\n", N)
//
//int main()
//{
//	int a = 100;
//	double pai = 3.1415;
//
//	PRINT(a, "%d");
//	PRINT(pai, "%lf");
//
//	return 0;
//}

//#define CAT(sum, num) sum##num
// 续行符
//#define CAT(sum, num) \
//	sum##num
//
//int main()
//{
//	int sum3 = 10;
//	printf("%d\n", CAT(sum, 3));
//
//	return 0;
//}

//#define MAX(x, y) ((x)>(y)?(x):(y))
//
//int main()
//{
//	int a = 5;
//	int b = 8;
//	int c = MAX(a++, b++); // 带副作用的宏参数
//
//	printf("a = %d, b = %d, c = %d\n", a, b, c);
//
//	return 0;
//}

// 条件编译
//#define __DEBUG__ 0
//
//int main()
//{
//#if __DEBUG__
//	printf("test\n");
//#endif
//	return 0;
//}

//#define NUM 3
//
//int main()
//{
//#if NUM==1
//	printf("1\n");
//#elif NUM == 2
//	printf("2\n");
//#else
//	printf("else\n");
//#endif
//
//	return 0;
//}

//#define __TEST__
//
//int main()
//{
//#if defined(__TEST__)
//	printf("test1\n");
//#endif // defined(__TEST__)
//
//#ifdef __TEST__
//	printf("test2\n");
//#endif // __TEST__
//
//#undef __TEST__
//
//#if !defined(__TEST__)
//	printf("test3\n");
//#endif // !defined(__TEST__)
//
//#ifndef __TEST__
//	printf("test4\n");
//#endif // !__TEST__
//
//	return 0;
//}