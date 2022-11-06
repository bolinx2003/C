#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

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